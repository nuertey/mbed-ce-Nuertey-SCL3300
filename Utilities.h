/***********************************************************************
* @file
*
* A miscellany of utilities for programming ARM Mbed-enabled targets.
*       
* @note     Quiet Thought is the Mother of Innovation. 
* 
* @warning  
* 
*  Created: January 13, 2025
*   Author: Nuertey Odzeyem        
************************************************************************/
#pragma once

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <ctime>
#include <cctype>
#include <climits>
#include <cstdio>
#include <cstring>
#include <cstddef>
#include <cstdlib>
#include <cstdint>
#include <cassert>
#include <memory>
#include <utility> 
#include <type_traits>
#include <algorithm>
#include <functional>
#include <optional>
#include <iomanip>
#include <ostream>
#include <sstream>
#include <map>
#include <array>
#include <tuple>
#include <string>
#include <chrono>
//#include "mbed_mem_trace.h"
#include "mbed_events.h"   // thread and irq safe
#include "mbed.h"
    
// These clocks should NOT be relied on in embedded systems. Rather, use the RTC. 
using SystemClock_t         = std::chrono::system_clock;
using SteadyClock_t         = std::chrono::steady_clock;

using Seconds_t             = std::chrono::seconds;
using MilliSecs_t           = std::chrono::milliseconds;
using MicroSecs_t           = std::chrono::microseconds;
using NanoSecs_t            = std::chrono::nanoseconds;
using DoubleSecs_t          = std::chrono::duration<double>;
using FloatingMilliSecs_t   = std::chrono::duration<double, std::milli>;
using FloatingMicroSecs_t   = std::chrono::duration<double, std::micro>;
    
namespace Utilities
{
    template <typename T, typename U>
    struct TrueTypesEquivalent : std::is_same<typename std::decay_t<T>, U>::type
    {};

    template <typename E>
    constexpr auto ToUnderlyingType(E e) -> typename std::underlying_type<E>::type
    {
        return static_cast<typename std::underlying_type<E>::type>(e);
    }

    template <typename E, typename V = unsigned long>
    constexpr auto ToEnum(V value) -> E
    {
        return static_cast<E>(value);
    }

    // This custom clock type obtains the time from RTC too whilst noting the Processor speed.
    struct NucleoF767ZIClock_t
    {
        using rep        = std::int64_t;
        using period     = std::ratio<1, 216'000'000>; // Processor speed, 1 tick == 4.62962963ns
        using duration   = std::chrono::duration<rep, period>;
        using time_point = std::chrono::time_point<NucleoF767ZIClock_t>;
        static constexpr bool is_steady = true;

        // This method/approach has been proven to work. Yay!
        static time_point now() noexcept
        {
            return from_time_t(time(NULL));
        }

        // This method/approach has been proven to work. Yay!
        static std::time_t to_time_t(const time_point& __t) noexcept
        {
            return std::time_t(std::chrono::duration_cast<Seconds_t>(__t.time_since_epoch()).count());
        }

        // This method/approach has been proven to work. Yay!
        static time_point from_time_t(std::time_t __t) noexcept
        {
            typedef std::chrono::time_point<NucleoF767ZIClock_t, Seconds_t> __from;
            return std::chrono::time_point_cast<NucleoF767ZIClock_t::duration>(__from(Seconds_t(__t)));
        }
    };

    // Now you can say things like:
    //
    // auto t = Utility::NucleoF767ZIClock_t::now();  // a chrono::time_point
    //
    // and
    //
    // auto d = Utility::NucleoF767ZIClock_t::now() - t;  // a chrono::duration

    // This custom clock type obtains the time from the 'chip-external' Real Time Clock (RTC).
    template <typename Clock_t = SystemClock_t>
    const auto Now = []()
    {
        time_t seconds = time(NULL);
        typename Clock_t::time_point tempTimepoint = Clock_t::from_time_t(seconds);

        return tempTimepoint;
    };

    const auto WhatTimeNow = []()
    {
        char buffer[32];
        time_t seconds = time(NULL);
        //printf("\r\nTime as seconds since January 1, 1970 = %lld", seconds);
        //printf("\r\nTime as a basic string = %s", ctime(&seconds));
        std::size_t len = std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&seconds));
        std::string timeStr(buffer, len);

        //printf("\r\nDebug len :-> [%d]", len);
        //printf("\r\nDebug timeStr :-> [%s]", timeStr.c_str());

        return timeStr;
    };

    const auto SecondsToString = [](const time_t& seconds)
    {
        char buffer[32];
        std::size_t len = std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&seconds));
        std::string timeStr(buffer, len);

        return timeStr;
    };

    template <typename T>
    typename std::make_unsigned<T>::type abs(T x)
    {
        // Cast before negating x to avoid overflow.
        return x < 0? -static_cast<decltype(abs(x))>(x) : x;
    }
    
    template <typename T>
    static constexpr inline T pown(T x, unsigned p)
    {
        T result = 1;

        while (p)
        {
            if (p & 0x1)
            {
                result *= x;
            }
            x *= x;
            p >>= 1;
        }

        return result;
    }
    
    template <typename T>
    constexpr auto TruncateAndToString = [](const T& x, const int& decimalDigits = 2)
    {
        std::ostringstream oss;  
        oss << std::fixed;
        oss.precision(decimalDigits);
        oss << x;
        return oss.str();
    };
    
    const auto TemperatureToString = [](const float& temperature)
    {
        std::ostringstream oss;  
        oss << std::fixed;
        oss.precision(2);
        oss << "Temp: " << temperature << " F";
        return oss.str();
    };
    
    const auto HumidityToString = [](const float& humidity)
    {
        std::ostringstream oss;  
        oss << std::fixed;
        oss.precision(2);
        oss << "Humi: " << humidity << " % RH";
        return oss.str();
    };

    template <typename E>
    constexpr auto ToIntegral(E e) -> typename std::underlying_type<E>::type
    {
        return static_cast<typename std::underlying_type<E>::type>(e);
    }

    template <typename T>
    std::string IntegerToHex(const T& i)
    {
        std::stringstream stream;
        stream << std::showbase << std::setfill('0') 
               << std::setw(sizeof(T)*2) 
               << std::hex 
               << std::uppercase 
               << i;
        return stream.str();
    }

    template <typename T>
    std::string IntegerToDec(const T& i)
    {
        std::stringstream stream;
        stream << std::dec << std::to_string(i);
        return stream.str();
    }

} //end of namespace

