
/*
Mbed OS Target Define Header.
This contains all of the #defines specific to your target and device.
It is prepended to every source file using the -include compiler option.
AUTOGENERATED by cmake.  DO NOT EDIT!
*/
#ifndef MBED_TARGET_CONFIG_H
#define MBED_TARGET_CONFIG_H

// Defines from MBED_TARGET_DEFINITIONS:
#define DEVICE_SLEEP 1
#define DEVICE_ANALOGOUT 1
#define DEVICE_RESET_REASON 1
#define DEVICE_RTC 1
#define DEVICE_SERIAL 1
#define DEVICE_WATCHDOG 1
#define DEVICE_PORTINOUT 1
#define DEVICE_CAN 1
#define DEVICE_EMAC 1
#define DEVICE_SPI 1
#define DEVICE_PWMOUT 1
#define DEVICE_LPTICKER 1
#define DEVICE_MPU 1
#define DEVICE_SPI_ASYNCH 1
#define DEVICE_USBDEVICE 1
#define DEVICE_CRC 1
#define DEVICE_PORTOUT 1
#define DEVICE_USTICKER 1
#define DEVICE_INTERRUPTIN 1
#define DEVICE_I2CSLAVE 1
#define DEVICE_PORTIN 1
#define DEVICE_SERIAL_ASYNCH 1
#define DEVICE_I2C 1
#define DEVICE_SPISLAVE 1
#define DEVICE_FLASH 1
#define DEVICE_TRNG 1
#define DEVICE_SERIAL_FC 1
#define DEVICE_ANALOGIN 1
#define DEVICE_I2C_ASYNCH 1
#define TARGET_LIKE_CORTEX_M7 1
#define TARGET_NUCLEO_F767ZI 1
#define TARGET_MCU_STM32F7 1
#define TARGET_M7 1
#define TARGET_CORTEX_M 1
#define TARGET_Target 1
#define TARGET_RTOS_M4_M7 1
#define TARGET_CORTEX 1
#define TARGET_MCU_STM32 1
#define TARGET_STM32F767xI 1
#define TARGET_STM32F767ZI 1
#define TARGET_STM 1
#define TARGET_STM32F7 1
#define TARGET_FF_ARDUINO_UNO 1
#define TARGET_LIKE_MBED 1
#define __MBED__ 1

// Defines from MBED_CONFIG_DEFINITIONS:
#define MBED_CONF_TARGET_CONSOLE_UART 1
#define MBED_CONF_TARGET_CONSOLE_USB 0
#define MBED_CONF_TARGET_NETWORK_DEFAULT_INTERFACE_TYPE ETHERNET
#define MBED_CONF_TARGET_DEEP_SLEEP_LATENCY 4
#define MBED_CONF_TARGET_BOOT_STACK_SIZE 0x400
#define MBED_CONF_TARGET_MPU_ROM_END 0x0fffffff
#define MBED_CONF_TARGET_TICKLESS_FROM_US_TICKER 0
#define MBED_CONF_TARGET_INIT_US_TICKER_AT_BOOT 1
#define MBED_CONF_TARGET_CUSTOM_TICKERS 1
#define MBED_CONF_TARGET_XIP_ENABLE 0
#define MBED_CONF_TARGET_DEFAULT_ADC_VREF NAN
#define MBED_CONF_TARGET_INTERNAL_FLASH_UNIFORM_SECTORS 0
#define MBED_CONF_TARGET_SEMIHOSTING_ENABLED 0
#define MBED_CONF_TARGET_LSE_AVAILABLE 1
#define MBED_CONF_TARGET_LSE_BYPASS 0
#define MBED_CONF_TARGET_RTC_CLOCK_SOURCE USE_RTC_CLK_LSE_OR_LSI
#define MBED_CONF_TARGET_LPUART_CLOCK_SOURCE USE_LPUART_CLK_LSE|USE_LPUART_CLK_PCLK1|USE_LPUART_CLK_PCLK3|USE_LPUART_CLK_SYSCLK
#define LPTICKER_DELAY_TICKS 0
#define MBED_CONF_TARGET_LPTICKER_LPTIM_CLOCK 1
#define MBED_CONF_TARGET_GPIO_RESET_AT_INIT 0
#define CLOCK_SOURCE USE_PLL_HSE_EXTC|USE_PLL_HSI
#define MBED_CONF_TARGET_LPTICKER_LPTIM 1
#define MBED_CONF_TARGET_LSE_DRIVE_LOAD_LEVEL RCC_LSEDRIVE_LOW
#define MBED_CONF_TARGET_I2C_TIMING_VALUE_ALGO 0
#define MBED_CONF_TARGET_FLASH_DUAL_BANK 0
#define STM32_D11_SPI_ETHERNET_PIN PA_7
#define MBED_LFS_READ_SIZE 64
#define MBED_LFS_PROG_SIZE 64
#define MBED_LFS_BLOCK_SIZE 512
#define MBED_LFS_LOOKAHEAD 512
#define MBED_LFS_INTRINSICS 1
#define MBED_LFS_ENABLE_INFO 0
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_THREAD_STACK_SIZE 6144
#define MBED_CONF_NANOSTACK_HAL_CRITICAL_SECTION_USABLE_FROM_INTERRUPT 0
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_DISPATCH_FROM_APPLICATION 0
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_USE_MBED_EVENTS 0
#define MBED_CONF_NANOSTACK_HAL_USE_KVSTORE 0
#define MBED_CONF_NANOSTACK_HAL_KVSTORE_PATH "/kv/"
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_FILESYSTEM default
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_BLOCKDEVICE default
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_EXTERNAL_SIZE 0
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_EXTERNAL_BASE_ADDRESS 0
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_MOUNT_POINT kv
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_FOLDER_PATH kvstore
#define MBED_CONF_MBED_TRACE_ENABLE 1
#define MEM_ALLOC malloc
#define MBED_TRACE_COLOR_THEME 0
#define MEM_FREE free
#define MBED_CONF_LORA_PHY EU868
#define MBED_CONF_LORA_PHY_AS923_SUB_REGION AS1
#define MBED_CONF_LORA_OVER_THE_AIR_ACTIVATION 1
#define MBED_CONF_LORA_NB_TRIALS 12
#define MBED_CONF_LORA_DEVICE_EUI {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define MBED_CONF_LORA_APPLICATION_EUI {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define MBED_CONF_LORA_APPLICATION_KEY {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define MBED_CONF_LORA_DEVICE_ADDRESS 0x00000000
#define MBED_CONF_LORA_NWKSKEY {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define MBED_CONF_LORA_APPSKEY {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define MBED_CONF_LORA_APP_PORT 15
#define MBED_CONF_LORA_TX_MAX_SIZE 64
#define MBED_CONF_LORA_ADR_ON 1
#define MBED_CONF_LORA_PUBLIC_NETWORK 1
#define MBED_CONF_LORA_DUTY_CYCLE_ON 1
#define MBED_CONF_LORA_DUTY_CYCLE_ON_JOIN 1
#define MBED_CONF_LORA_LBT_ON 0
#define MBED_CONF_LORA_AUTOMATIC_UPLINK_MESSAGE 1
#define MBED_CONF_LORA_MAX_SYS_RX_ERROR 5
#define MBED_CONF_LORA_WAKEUP_TIME 5
#define MBED_CONF_LORA_DOWNLINK_PREAMBLE_LENGTH 5
#define MBED_CONF_LORA_UPLINK_PREAMBLE_LENGTH 8
#define MBED_CONF_LORA_FSB_MASK {0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x00FF}
#define MBED_CONF_LORA_FSB_MASK_CHINA {0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF}
#define MBED_CONF_FAT_CHAN_FFS_DBG 0
#define MBED_CONF_FAT_CHAN_FF_FS_READONLY 0
#define MBED_CONF_FAT_CHAN_FF_FS_MINIMIZE 0
#define MBED_CONF_FAT_CHAN_FF_USE_STRFUNC 0
#define MBED_CONF_FAT_CHAN_FF_PRINT_LLI 0
#define MBED_CONF_FAT_CHAN_FF_PRINT_FLOAT 0
#define MBED_CONF_FAT_CHAN_FF_STRF_ENCODE 3
#define MBED_CONF_FAT_CHAN_FF_USE_FIND 0
#define MBED_CONF_FAT_CHAN_FF_USE_MKFS 1
#define MBED_CONF_FAT_CHAN_FF_USE_FASTSEEK 0
#define MBED_CONF_FAT_CHAN_FF_USE_EXPAND 0
#define MBED_CONF_FAT_CHAN_FF_USE_CHMOD 0
#define MBED_CONF_FAT_CHAN_FF_USE_LABEL 0
#define MBED_CONF_FAT_CHAN_FF_USE_FORWARD 0
#define MBED_CONF_FAT_CHAN_FF_CODE_PAGE 437
#define MBED_CONF_FAT_CHAN_FF_USE_LFN 3
#define MBED_CONF_FAT_CHAN_FF_MAX_LFN 255
#define MBED_CONF_FAT_CHAN_FF_LFN_UNICODE 0
#define MBED_CONF_FAT_CHAN_FF_LFN_BUF 255
#define MBED_CONF_FAT_CHAN_FF_SFN_BUF 12
#define MBED_CONF_FAT_CHAN_FF_FS_RPATH 1
#define MBED_CONF_FAT_CHAN_FF_VOLUMES 4
#define MBED_CONF_FAT_CHAN_FF_STR_VOLUME_ID 0
#define MBED_CONF_FAT_CHAN_FF_VOLUME_STRS "RAM","NAND","CF","SD","SD2","USB","USB2","USB3"
#define MBED_CONF_FAT_CHAN_FF_MULTI_PARTITION 0
#define MBED_CONF_FAT_CHAN_FF_MIN_SS 512
#define MBED_CONF_FAT_CHAN_FF_MAX_SS 4096
#define MBED_CONF_FAT_CHAN_FF_USE_TRIM 1
#define MBED_CONF_FAT_CHAN_FF_FS_NOFSINFO 0
#define MBED_CONF_FAT_CHAN_FF_FS_TINY 1
#define MBED_CONF_FAT_CHAN_FF_FS_EXFAT 0
#define MBED_CONF_FAT_CHAN_FF_FS_HEAPBUF 1
#define MBED_CONF_FAT_CHAN_FF_FS_NORTC 0
#define MBED_CONF_FAT_CHAN_FF_NORTC_MON 1
#define MBED_CONF_FAT_CHAN_FF_NORTC_MDAY 1
#define MBED_CONF_FAT_CHAN_FF_NORTC_YEAR 2017
#define MBED_CONF_FAT_CHAN_FF_FS_LOCK 0
#define MBED_CONF_FAT_CHAN_FF_FS_REENTRANT 0
#define MBED_CONF_FAT_CHAN_FF_FS_TIMEOUT 1000
#define MBED_CONF_FAT_CHAN_FF_SYNC_T HANDLE
#define MBED_CONF_FAT_CHAN_FLUSH_ON_NEW_CLUSTER 0
#define MBED_CONF_FAT_CHAN_FLUSH_ON_NEW_SECTOR 1
#define MBED_CONF_CELLULAR_USE_APN_LOOKUP 0
#define MBED_CONF_CELLULAR_USE_SMS 0
#define MBED_CONF_CELLULAR_RANDOM_MAX_START_DELAY 0
#define MBED_CONF_CELLULAR_DEBUG_AT 0
#define MBED_CONF_CELLULAR_CONTROL_PLANE_OPT 0
#define MBED_CONF_CELLULAR_MAX_CP_DATA_RECV_LEN 1358
#define MBED_CONF_CELLULAR_AT_HANDLER_BUFFER_SIZE 32
#define MBED_CONF_CELLULAR_EVENT_QUEUE_SIZE 10
#define MBED_CONF_STM32_EMAC_ETH_RXBUFNB 4
#define MBED_CONF_STM32_EMAC_ETH_TXBUFNB 4
#define MBED_CONF_STM32_EMAC_THREAD_STACKSIZE 1024
#define MBED_CONF_STM32_EMAC_ETH_PHY_ADDRESS 0
#define MBED_CONF_STM32_EMAC_ETH_PHY_MEDIA_INTERFACE ETH_MEDIA_INTERFACE_RMII
#define MBED_CONF_STM32_EMAC_ETH_PHY_AUTONEGOTIATION ETH_AUTONEGOTIATION_ENABLE
#define MBED_CONF_STM32_EMAC_ETH_PHY_DUPLEXMODE ETH_MODE_FULLDUPLEX
#define MBED_CONF_STM32_EMAC_ETH_PHY_SPEED ETH_SPEED_100M
#define MBED_CONF_STM32_EMAC_ETH_PHY_RESET_DELAY 500
#define MBED_CONF_STM32_EMAC_ETH_PHY_STATUS_REGISTER 31
#define MBED_CONF_STM32_EMAC_ETH_PHY_SPEED_STATUS 0x0004
#define MBED_CONF_STM32_EMAC_ETH_PHY_DUPLEX_STATUS 0x0010
#define MBED_CONF_STM32_EMAC_MAX_MCAST_SUBSCRIBES 8
#define MBED_CONF_STORAGE_STORAGE_TYPE default
#define MBED_CONF_STORAGE_DEFAULT_KV kv
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE 256
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE 256
#define MBED_CRC_TABLE_SIZE 16
#define MBED_CONF_DRIVERS_SPI_TRANSACTION_QUEUE_LEN 2
#define MBED_CONF_DRIVERS_QSPI_IO0 QSPI_FLASH1_IO0
#define MBED_CONF_DRIVERS_QSPI_IO1 QSPI_FLASH1_IO1
#define MBED_CONF_DRIVERS_QSPI_IO2 QSPI_FLASH1_IO2
#define MBED_CONF_DRIVERS_QSPI_IO3 QSPI_FLASH1_IO3
#define MBED_CONF_DRIVERS_QSPI_SCK QSPI_FLASH1_SCK
#define MBED_CONF_DRIVERS_QSPI_CSN QSPI_FLASH1_CSN
#define MBED_CONF_DRIVERS_OSPI_IO0 OSPI_FLASH1_IO0
#define MBED_CONF_DRIVERS_OSPI_IO1 OSPI_FLASH1_IO1
#define MBED_CONF_DRIVERS_OSPI_IO2 OSPI_FLASH1_IO2
#define MBED_CONF_DRIVERS_OSPI_IO3 OSPI_FLASH1_IO3
#define MBED_CONF_DRIVERS_OSPI_IO4 OSPI_FLASH1_IO4
#define MBED_CONF_DRIVERS_OSPI_IO5 OSPI_FLASH1_IO5
#define MBED_CONF_DRIVERS_OSPI_IO6 OSPI_FLASH1_IO6
#define MBED_CONF_DRIVERS_OSPI_IO7 OSPI_FLASH1_IO7
#define MBED_CONF_DRIVERS_OSPI_SCK OSPI_FLASH1_SCK
#define MBED_CONF_DRIVERS_OSPI_CSN OSPI_FLASH1_CSN
#define MBED_CONF_DRIVERS_OSPI_DQS OSPI_FLASH1_DQS
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_BLOCKDEVICE default
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_EXTERNAL_SIZE 0
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_EXTERNAL_BASE_ADDRESS 0
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES 1
#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES 1
#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL 0
#define MBED_CONF_PLATFORM_STDIO_MINIMAL_CONSOLE_ONLY 0
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE 115200
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT 1
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE 115200
#define MBED_CONF_PLATFORM_POLL_USE_LOWPOWER_TIMER 0
#define MBED_CONF_PLATFORM_ERROR_HIST_ENABLED 0
#define MBED_CONF_PLATFORM_ERROR_HIST_SIZE 4
#define MBED_CONF_PLATFORM_ERROR_FILENAME_CAPTURE_ENABLED 0
#define MBED_CONF_PLATFORM_ERROR_ALL_THREADS_INFO 0
#define MBED_CONF_PLATFORM_MAX_ERROR_FILENAME_LEN 16
#define MBED_STACK_DUMP_ENABLED 0
#define MBED_CONF_PLATFORM_DEEPSLEEP_STATS_VERBOSE 0
#define MBED_CONF_PLATFORM_CTHUNK_COUNT_MAX 8
#define MBED_CONF_PLATFORM_CALLBACK_NONTRIVIAL 0
#define MBED_CONF_PLATFORM_CALLBACK_COMPARABLE 1
#define MBED_CONF_PLATFORM_CRASH_CAPTURE_ENABLED 1
#define MBED_CONF_PLATFORM_ERROR_REBOOT_MAX 1
#define MBED_CONF_PLATFORM_FATAL_ERROR_AUTO_REBOOT_ENABLED 1
#define MBED_CONF_PLATFORM_USE_MPU 1
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_ENABLE_64_BIT 1
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_ENABLE_FLOATING_POINT 1
#define MBED_CONF_PLATFORM_MINIMAL_PRINTF_SET_FLOATING_POINT_MAX_DECIMALS 6
#define MBED_CONF_PPP_ENABLED 0
#define MBED_CONF_PPP_IPV4_ENABLED 1
#define MBED_CONF_PPP_IPV6_ENABLED 0
#define PPP_DEBUG 0
#define MBED_CONF_PPP_ENABLE_TRACE 0
#define MBED_CONF_PPP_THREAD_STACKSIZE 816
#define MBED_CONF_PPP_MBED_EVENT_QUEUE 0
#define MBED_CONF_STORAGE_FILESYSTEM_RBP_INTERNAL_SIZE 0
#define MBED_CONF_STORAGE_FILESYSTEM_INTERNAL_BASE_ADDRESS 0
#define MBED_CONF_STORAGE_FILESYSTEM_FILESYSTEM default
#define MBED_CONF_STORAGE_FILESYSTEM_BLOCKDEVICE default
#define MBED_CONF_STORAGE_FILESYSTEM_EXTERNAL_SIZE 0
#define MBED_CONF_STORAGE_FILESYSTEM_EXTERNAL_BASE_ADDRESS 0
#define MBED_CONF_STORAGE_FILESYSTEM_MOUNT_POINT kv
#define MBED_CONF_STORAGE_FILESYSTEM_FOLDER_PATH kvstore
#define MBED_CONF_NANOSTACK_LIBSERVICE_NSDYNMEM_TRACKER_ENABLED 0
#define MBED_CONF_NANOSTACK_CONFIGURATION nanostack_full
#define MBED_CONF_RTOS_MAIN_THREAD_STACK_SIZE 4096
#define MBED_CONF_RTOS_TIMER_THREAD_STACK_SIZE 768
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE 512
#define MBED_CONF_RTOS_THREAD_STACK_SIZE 4096
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE_TICKLESS_EXTRA 256
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE_DEBUG_EXTRA 128
#define MBED_CONF_RTOS_THREAD_NUM 0
#define MBED_CONF_RTOS_THREAD_USER_STACK_SIZE 0
#define MBED_CONF_RTOS_TIMER_NUM 0
#define MBED_CONF_RTOS_EVFLAGS_NUM 0
#define MBED_CONF_RTOS_MUTEX_NUM 0
#define MBED_CONF_RTOS_SEMAPHORE_NUM 0
#define MBED_CONF_RTOS_MSGQUEUE_NUM 0
#define MBED_CONF_RTOS_MSGQUEUE_DATA_SIZE 0
#define MBED_CONF_RTOS_ENABLE_ALL_RTX_EVENTS 0
#define MBED_CONF_NSAPI_ADD_EVENT_LISTENER_RETURN_CHANGE 0
#define MBED_CONF_NSAPI_DEFAULT_STACK LWIP
#define MBED_CONF_NSAPI_DEFAULT_WIFI_SECURITY NONE
#define MBED_CONF_NSAPI_DEFAULT_MESH_TYPE THREAD
#define MBED_CONF_NSAPI_DNS_RESPONSE_WAIT_TIME 10000
#define MBED_CONF_NSAPI_DNS_TOTAL_ATTEMPTS 10
#define MBED_CONF_NSAPI_DNS_RETRIES 1
#define MBED_CONF_NSAPI_DNS_CACHE_SIZE 3
#define MBED_CONF_NSAPI_DNS_ADDRESSES_LIMIT 10
#define MBED_CONF_NSAPI_SOCKET_STATS_ENABLED 0
#define MBED_CONF_NSAPI_SOCKET_STATS_MAX_COUNT 10
#define MBED_CONF_LWIP_IPV4_ENABLED 1
#define MBED_CONF_LWIP_IPV6_ENABLED 0
#define MBED_CONF_LWIP_IP_VER_PREF 4
#define MBED_CONF_LWIP_ADDR_TIMEOUT 5
#define MBED_CONF_LWIP_ADDR_TIMEOUT_MODE 1
#define MBED_CONF_LWIP_DHCP_TIMEOUT 60
#define MBED_CONF_LWIP_ETHERNET_ENABLED 1
#define MBED_CONF_LWIP_L3IP_ENABLED 0
#define MBED_CONF_LWIP_DEBUG_ENABLED 0
#define MBED_CONF_LWIP_PPP_ENABLED 0
#define MBED_CONF_LWIP_PPP_IPV4_ENABLED 0
#define MBED_CONF_LWIP_PPP_IPV6_ENABLED 0
#define MBED_CONF_LWIP_USE_MBED_TRACE 0
#define MBED_CONF_LWIP_ENABLE_PPP_TRACE 0
#define MBED_CONF_LWIP_SOCKET_MAX 4
#define MBED_CONF_LWIP_TCP_ENABLED 1
#define MBED_CONF_LWIP_TCP_SERVER_MAX 4
#define MBED_CONF_LWIP_TCP_SOCKET_MAX 4
#define MBED_CONF_LWIP_UDP_SOCKET_MAX 4
#define MBED_CONF_LWIP_MEMP_NUM_TCP_SEG 16
#define MBED_CONF_LWIP_MEMP_NUM_TCPIP_MSG_INPKT 8
#define MBED_CONF_LWIP_TCP_MSS 536
#define MBED_CONF_LWIP_MBOX_SIZE 8
#define MBED_CONF_LWIP_TCP_SND_BUF (2 * TCP_MSS)
#define MBED_CONF_LWIP_TCP_WND (4 * TCP_MSS)
#define MBED_CONF_LWIP_TCP_MAXRTX 6
#define MBED_CONF_LWIP_TCP_SYNMAXRTX 6
#define MBED_CONF_LWIP_TCP_CLOSE_TIMEOUT 1000
#define MBED_CONF_LWIP_TCPIP_THREAD_PRIORITY osPriorityNormal
#define MBED_CONF_LWIP_PBUF_POOL_SIZE 5
#define MBED_CONF_LWIP_MEM_SIZE 2310
#define MBED_CONF_LWIP_TCPIP_THREAD_STACKSIZE 1200
#define MBED_CONF_LWIP_DEFAULT_THREAD_STACKSIZE 512
#define MBED_CONF_LWIP_PPP_THREAD_STACKSIZE 768
#define MBED_CONF_LWIP_NUM_PBUF 8
#define MBED_CONF_LWIP_NUM_NETBUF 8
#define MBED_CONF_LWIP_RAW_SOCKET_ENABLED 0
#define MBED_CONF_LWIP_ND6_RDNSS_MAX_DNS_SERVERS 0
#define MBED_CONF_LWIP_ND6_QUEUEING 0
#define MBED_CONF_LWIP_NETBUF_RECVINFO_ENABLED 0
#define MBED_CONF_EVENTS_SHARED_STACKSIZE 2048
#define MBED_CONF_EVENTS_SHARED_EVENTSIZE 768
#define MBED_CONF_EVENTS_SHARED_DISPATCH_FROM_APPLICATION 0
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_STACKSIZE 1024
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_EVENTSIZE 256
#define MBED_CONF_EVENTS_USE_LOWPOWER_TIMER_TICKER 0
#define MBED_CONF_STORAGE_TDB_EXTERNAL_RBP_INTERNAL_SIZE 0
#define MBED_CONF_STORAGE_TDB_EXTERNAL_INTERNAL_BASE_ADDRESS 0
#define MBED_CONF_STORAGE_TDB_EXTERNAL_BLOCKDEVICE default
#define MBED_CONF_STORAGE_TDB_EXTERNAL_EXTERNAL_SIZE 0
#define MBED_CONF_STORAGE_TDB_EXTERNAL_EXTERNAL_BASE_ADDRESS 0
#define MBED_CONF_MBED_MESH_API_HEAP_SIZE 32500
#define MBED_CONF_MBED_MESH_API_MAC_NEIGH_TABLE_SIZE 32
#define MBED_CONF_MBED_MESH_API_USE_MALLOC_FOR_HEAP 0
#define MBED_CONF_MBED_MESH_API_HEAP_STAT_INFO NULL
#define MBED_CONF_MBED_MESH_API_SYSTEM_TIME_UPDATE_FROM_NANOSTACK 1
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL_MASK 0x7fff800
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL_PAGE 0
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL 0
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PANID_FILTER 0xffff
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_SECURITY_MODE NONE
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PSK_KEY_ID 1
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PSK_KEY {0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf}
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_SEC_LEVEL 5
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_DEVICE_TYPE NET_6LOWPAN_ROUTER
#define MBED_CONF_MBED_MESH_API_THREAD_PSKD "ABCDEFGH"
#define MBED_CONF_MBED_MESH_API_THREAD_USE_STATIC_LINK_CONFIG 1
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL_MASK 0x7fff800
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL_PAGE 0
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL 22
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_PANID 0x0700
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_NETWORK_NAME "Thread Network"
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_COMMISSIONING_DATASET_TIMESTAMP 0x10000
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_EXTENDED_PANID {0xf1, 0xb5, 0xa1, 0xb2,0xc4, 0xd5, 0xa1, 0xbd }
#define MBED_CONF_MBED_MESH_API_THREAD_MASTER_KEY {0x10, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff}
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_ML_PREFIX {0xfd, 0x0, 0x0d, 0xb8, 0x0, 0x0, 0x0, 0x0}
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_PSKC {0xc8, 0xa6, 0x2e, 0xae, 0xf3, 0x68, 0xf3, 0x46, 0xa9, 0x9e, 0x57, 0x85, 0x98, 0x9d, 0x1c, 0xd0}
#define MBED_CONF_MBED_MESH_API_THREAD_DEVICE_TYPE MESH_DEVICE_TYPE_THREAD_ROUTER
#define MBED_CONF_MBED_MESH_API_THREAD_SECURITY_POLICY 255
#define MBED_CONF_MBED_MESH_API_WISUN_NETWORK_NAME "Wi-SUN Network"
#define MBED_CONF_MBED_MESH_API_WISUN_REGULATORY_DOMAIN 3
#define MBED_CONF_MBED_MESH_API_WISUN_OPERATING_CLASS 255
#define MBED_CONF_MBED_MESH_API_WISUN_OPERATING_MODE 255
#define MBED_CONF_MBED_MESH_API_WISUN_PHY_MODE_ID 255
#define MBED_CONF_MBED_MESH_API_WISUN_CHANNEL_PLAN_ID 255
#define MBED_CONF_MBED_MESH_API_WISUN_UC_CHANNEL_FUNCTION 255
#define MBED_CONF_MBED_MESH_API_WISUN_BC_CHANNEL_FUNCTION 255
#define MBED_CONF_MBED_MESH_API_WISUN_UC_FIXED_CHANNEL 65535
#define MBED_CONF_MBED_MESH_API_WISUN_BC_FIXED_CHANNEL 65535
#define MBED_CONF_MBED_MESH_API_WISUN_BC_INTERVAL 0
#define MBED_CONF_MBED_MESH_API_WISUN_BC_DWELL_INTERVAL 0
#define MBED_CONF_MBED_MESH_API_WISUN_UC_DWELL_INTERVAL 255
#define MBED_CONF_MBED_MESH_API_WISUN_DEVICE_TYPE MESH_DEVICE_TYPE_WISUN_ROUTER
#define MBED_CONF_MBED_MESH_API_RADIUS_RETRY_IMIN 20
#define MBED_CONF_MBED_MESH_API_RADIUS_RETRY_IMAX 30
#define MBED_CONF_MBED_MESH_API_RADIUS_RETRY_COUNT 3
#define MBED_CONF_STORAGE_TDB_INTERNAL_INTERNAL_SIZE 0
#define MBED_CONF_STORAGE_TDB_INTERNAL_INTERNAL_BASE_ADDRESS 0
#define MBED_LFS2_BLOCK_SIZE 512
#define MBED_LFS2_BLOCK_CYCLES 1024
#define MBED_LFS2_CACHE_SIZE 64
#define MBED_LFS2_LOOKAHEAD_SIZE 64
#define MBED_LFS2_INTRINSICS 1
#define MBED_LFS2_ENABLE_INFO 0
#define UNITY_INCLUDE_CONFIG_H 1
#define STM32F767xx 1
#define MBED_TICKLESS 1
#define NSAPI_PPP_AVAILABLE (MBED_CONF_PPP_ENABLED || MBED_CONF_LWIP_PPP_ENABLED)
#define USE_HAL_DRIVER 1
#define _RTE_ 1
#define NSDYNMEM_TRACKER_ENABLED MBED_CONF_NANOSTACK_LIBSERVICE_NSDYNMEM_TRACKER_ENABLED
#define MBEDTLS_CIPHER_MODE_CTR 1
#define NS_USE_EXTERNAL_MBED_TLS 1
#define EXTRA_IDLE_STACK_REQUIRED 1
#define USE_FULL_LL_DRIVER 1
#define MBED_CONFIGURED_RAM1_SIZE 0x20000
#define MBED_CONFIGURED_RAM1_START 0x20000000
#define MBED_CONFIGURED_RAM_BANK_IRAM1_SIZE 0x60000
#define MBED_CONFIGURED_RAM_BANK_IRAM1_START 0x20020000
#define MBED_CONFIGURED_RAM_BANK_IRAM2_SIZE 0x20000
#define MBED_CONFIGURED_RAM_BANK_IRAM2_START 0x20000000
#define MBED_CONFIGURED_RAM_SIZE 0x60000
#define MBED_CONFIGURED_RAM_START 0x20020000
#define MBED_CONFIGURED_ROM1_SIZE 0x200000
#define MBED_CONFIGURED_ROM1_START 0x8000000
#define MBED_CONFIGURED_ROM_BANK_ROM_VIA_AXIM_BUS_SIZE 0x200000
#define MBED_CONFIGURED_ROM_BANK_ROM_VIA_AXIM_BUS_START 0x8000000
#define MBED_CONFIGURED_ROM_BANK_ROM_VIA_ITCM_BUS_SIZE 0x200000
#define MBED_CONFIGURED_ROM_BANK_ROM_VIA_ITCM_BUS_START 0x200000
#define MBED_CONFIGURED_ROM_SIZE 0x200000
#define MBED_CONFIGURED_ROM_START 0x200000
#define MBED_RAM1_SIZE 0x20000
#define MBED_RAM1_START 0x20000000
#define MBED_RAM_BANK_IRAM1_SIZE 0x60000
#define MBED_RAM_BANK_IRAM1_START 0x20020000
#define MBED_RAM_BANK_IRAM2_SIZE 0x20000
#define MBED_RAM_BANK_IRAM2_START 0x20000000
#define MBED_RAM_SIZE 0x60000
#define MBED_RAM_START 0x20020000
#define MBED_ROM1_SIZE 0x200000
#define MBED_ROM1_START 0x8000000
#define MBED_ROM_BANK_ROM_VIA_AXIM_BUS_SIZE 0x200000
#define MBED_ROM_BANK_ROM_VIA_AXIM_BUS_START 0x8000000
#define MBED_ROM_BANK_ROM_VIA_ITCM_BUS_SIZE 0x200000
#define MBED_ROM_BANK_ROM_VIA_ITCM_BUS_START 0x200000
#define MBED_ROM_SIZE 0x200000
#define MBED_ROM_START 0x200000
#endif
