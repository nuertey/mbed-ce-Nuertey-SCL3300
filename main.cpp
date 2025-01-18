/***********************************************************************
* @file      main.cpp
*
*    An ARM Mbed application that illustrates how a NUCLEO-F767ZI can be 
*    connected to a Murata SCL3300 Inclinometer Sensor Device.
*
* @brief   Test Murata SCL3300 Inclinometer Sensor Device.
* 
* @note    The Nucleo F767ZI is a development board from STMicroelectronics 
*          that includes an STM32F767ZIT6 microcontroller. The STM32F767ZI 
*          has the following features: 
* 
*          – 512 KB of RAM
*          – 2 MB of flash
*          – 114 GPIOs with external interrupt capability
*          – 12-bit ADCs with 24 channels
*          – Arduino Uno Revision 3 connectivity
*          – STMicroelectronics Morpho extension pin headers
*
* @warning Note that the I/O pins of STM32 NUCLEO-F767ZI are 3.3 V 
*          compatible instead of 5 V for say, the Arduino Uno V3 
*          microcontroller.
* 
*          Furthermore, the STM32 GPIO pins are not numbered 1-64; rather, 
*          they are named after the MCU IO port that they are controlled
*          by. Hence PA_5 is pin 5 on port A. This means that physical
*          pin location may not be related to the pin name. Consult 
*          the "Extension connectors" sub-chapter of the "Hardware 
*          layout and configuration" chapter of the STM32 Nucleo-144 
*          boards UM1974 User manual (en.DM00244518.pdf) to know where
*          each pin is located. Note that all those pins shown can be 
*          used as GPIOs, however most of them also have alternative 
*          functions which are indicated on those diagrams.
*
* @author    Nuertey Odzeyem
* 
* @date      January 13th, 2025
*
* @copyright Copyright (c) 2025 Nuertey Odzeyem. All Rights Reserved.
***********************************************************************/
#include "NuerteySCL3300Device.h"

#define LED_ON  1
#define LED_OFF 0

// Connector: CN7 
// Pin      : 14 
// Pin Name : D11       * Arduino-equivalent pin name
// STM32 Pin: PA7
// Signal   : SPI_A_MOSI/TIM_E_PWM1
//
// Connector: CN7 
// Pin      : 12 
// Pin Name : D12       * Arduino-equivalent pin name
// STM32 Pin: PA6
// Signal   : SPI_A_MISO 
//
// Connector: CN7 
// Pin      : 10 
// Pin Name : D13        * Arduino-equivalent pin name
// STM32 Pin: PA5
// Signal   : SPI_A_SCK
//
// Connector: CN7 
// Pin      : 16 
// Pin Name : D10       * Arduino-equivalent pin name
// STM32 Pin: PD14
// Signal   : SPI_A_CS/TIM_B_PWM3

// TBD, do actually connect these pins to the sensor once it arrives.
//
//        PinName mosi
//        PinName miso
//        PinName sclk
//        PinName ssel
NuerteySCL3300Device g_SCL3300Device(D11, D12, D13, D10); 
        
// As per my ARM NUCLEO-F767ZI specs:        
DigitalOut        g_LEDGreen(LED1);
DigitalOut        g_LEDBlue(LED2);
DigitalOut        g_LEDRed(LED3);

int main()
{
    printf("\r\n\r\nNuertey-SCL3300-Mbed - Beginning... \r\n\r\n");

    // Indicate with LEDs that we are commencing.
    g_LEDBlue = LED_ON;
    g_LEDGreen = LED_ON;
    
    g_SCL3300Device.LaunchStartupSequence();

    // Do not return from main() as in Embedded Systems, there is nothing
    // (conceptually) to return to. Otherwise the processor would halt and 
    // a crash will occur!         
    while (true)
    {
        // Indicate with LEDs that we are commencing.
        g_LEDBlue = LED_ON;
        g_LEDGreen = LED_ON;
        
        g_SCL3300Device.LaunchNormalOperationSequence();

        // Allow the user the chance to view the results:
        ThisThread::sleep_for(5s);
                
        g_SCL3300Device.LaunchSelfTestMonitoring();

        // Allow the user the chance to view the results:
        ThisThread::sleep_for(5s);
        
        g_LEDGreen = LED_OFF;
        g_LEDBlue = LED_OFF;
    }

    printf("\r\n\r\nNuertey-SCL3300-Mbed Application - Exiting.\r\n\r\n");
}
