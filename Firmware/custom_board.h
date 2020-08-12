#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif //CUSTOM_BOARD_H

#include "nrf_gpio.h"
#define LEDS_NUMBER    3

#define LED_R 9
#define LED_G 8
#define LED_B 7

#define LEDS_ACTIVE_STATE 1

#define LEDS_INV_MASK  LEDS_MASK

#define LEDS_LIST { LED_R, LED_G, LED_B}

#define BSP_LED_0      LED_B
#define BSP_LED_1      LED_G
#define BSP_LED_2      LED_R

#define BUTTONS_NUMBER 1
#define BUTTONS_ACTIVE_STATE 0 

#define BUTTON_1 30

#define BUTTONS_LIST { BUTTON_1 }

#define BSP_BUTTON_0   BUTTON_1


#define RX_PIN_NUMBER  8
#define TX_PIN_NUMBER  6
#define CTS_PIN_NUMBER 7
#define RTS_PIN_NUMBER 5
#define HWFC           true

#define SPIM0_SCK_PIN  2  // SPI clock GPIO pin number.
#define SPIM0_MOSI_PIN  5 // SPI Master Out Slave In GPIO pin number.
#define SPIM0_MISO_PIN  4 // SPI Master In Slave Out GPIO pin number.
#define SPIM0_SS_PIN    6 // SPI Slave Select GPIO pin number.

// #define SDC_SCK_PIN     28 //SDC serial clock (SCK) pin.
// #define SDC_MOSI_PIN    27 //SDC serial data in (DI) pin.
// #define SDC_MISO_PIN    26 //SDC serial data out (DO) pin.
// #define SDC_CS_PIN      29 //SDC chip select (CS) pin.

#define SCL_PIN 27
#define SDA_PIN 26

// Charlieplexing pins 
#define TIME_1 18
#define TIME_2 19
#define TIME_3 17
#define TIME_4 16
#define TIME_5 15
#define TIME_6 14
#define TIME_7 12
#define TIME_8 13

// #define IMU_INT_PIN 25
#define BAT_SENSE_PIN 5 //AIN6

//stuff the NRF examples use and I can remove later

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP
#ifdef __cplusplus
}
#endif

#endif // 
