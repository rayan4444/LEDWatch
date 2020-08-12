#include "watch_leds.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "custom_board.h"

/**
 * @brief function called to put all the time pins in high Z state: all the LEDs are off 
*/
void clear_watch_leds(){
    nrf_gpio_cfg_default(TIME_1);	
    nrf_gpio_cfg_default(TIME_2);	
    nrf_gpio_cfg_default(TIME_3);	
    nrf_gpio_cfg_default(TIME_4);	
    nrf_gpio_cfg_default(TIME_5);	
    nrf_gpio_cfg_default(TIME_6);	
    nrf_gpio_cfg_default(TIME_7);	
    nrf_gpio_cfg_default(TIME_8);		
}

/**
 * @brief set the LED corresponding to hour 1 or 13 high (LED 1). T1 high , T2 low, other pins highZ
*/
static void hour_1(){
    nrf_gpio_cfg_output(TIME_1);
    nrf_gpio_cfg_output(TIME_2);
    nrf_gpio_pin_write	(TIME_1,1);
    nrf_gpio_pin_write	(TIME_2,0);			
}

/**
 * @brief set the LED corresponding to hour 2 or 14 high (LED 2). T1 high , T3 low, other pins highZ
*/
static void hour_2(){
    nrf_gpio_cfg_output(TIME_1);
    nrf_gpio_cfg_output(TIME_3);
    nrf_gpio_pin_write	(TIME_1,1);
    nrf_gpio_pin_write	(TIME_3,0);			
}

/**
 * @brief set the LED corresponding to hour 3 or 15 high (LED 3). T1 high , T4 low, other pins highZ
*/
static void hour_3(){
    nrf_gpio_cfg_output(TIME_1);
    nrf_gpio_cfg_output(TIME_4);
    nrf_gpio_pin_write	(TIME_1,1);
    nrf_gpio_pin_write	(TIME_4,0);			
}

/**
 * @brief set the LED corresponding to hour 4 or 16 high (LED 4). T2 high , T3 low, other pins highZ
*/
static void hour_4(){
    nrf_gpio_cfg_output(TIME_2);
    nrf_gpio_cfg_output(TIME_3);
    nrf_gpio_pin_write	(TIME_2,1);
    nrf_gpio_pin_write	(TIME_3,0);			
}

/**
 * @brief set the LED corresponding to hour 5 or 17 high (LED 5). T2 high , T4 low, other pins highZ
*/
static void hour_5(){
    nrf_gpio_cfg_output(TIME_2);
    nrf_gpio_cfg_output(TIME_4);
    nrf_gpio_pin_write	(TIME_2,1);
    nrf_gpio_pin_write	(TIME_4,0);			
}

/**
 * @brief set the LED corresponding to hour 6 or 18 high (LED 6). T2 high , T4 low, other pins highZ
*/
static void hour_6(){
    nrf_gpio_cfg_output(TIME_3);
    nrf_gpio_cfg_output(TIME_4);
    nrf_gpio_pin_write	(TIME_3,1);
    nrf_gpio_pin_write	(TIME_4,0);			
}
/**
 * @brief set the LED corresponding to hour 7 or 19 high (LED 7). T5 high , T6 low, other pins highZ
*/
static void hour_7(){
    nrf_gpio_cfg_output(TIME_5);
    nrf_gpio_cfg_output(TIME_6);
    nrf_gpio_pin_write	(TIME_5,1);
    nrf_gpio_pin_write	(TIME_6,0);			
}

/**
 * @brief set the LED corresponding to hour 8 or 20 high (LED 8). T5 high , T7 low, other pins highZ
*/
static void hour_8(){
    nrf_gpio_cfg_output(TIME_5);
    nrf_gpio_cfg_output(TIME_7);
    nrf_gpio_pin_write	(TIME_5,1);
    nrf_gpio_pin_write	(TIME_7,0);			
}

/**
 * @brief set the LED corresponding to hour 9 or 21 high (LED 8). T5 high , T8 low, other pins highZ
*/
static void hour_9(){
    nrf_gpio_cfg_output(TIME_5);
    nrf_gpio_cfg_output(TIME_8);
    nrf_gpio_pin_write	(TIME_5,1);
    nrf_gpio_pin_write	(TIME_8,0);			
}

/**
 * @brief set the LED corresponding to hour 10 or 22 high (LED 10). T6 high , T7 low, other pins highZ
*/

static void hour_10(){
    nrf_gpio_cfg_output(TIME_6);
    nrf_gpio_cfg_output(TIME_7);
    nrf_gpio_pin_write	(TIME_6,1);
    nrf_gpio_pin_write	(TIME_7,0);			
}

/**
 * @brief set the LED corresponding to hour 11 or 23 high (LED 11). T6 high , T8 low, other pins highZ
*/
static void hour_11(){
    nrf_gpio_cfg_output(TIME_6);
    nrf_gpio_cfg_output(TIME_8);
    nrf_gpio_pin_write	(TIME_6,1);
    nrf_gpio_pin_write	(TIME_8,0);			
}

/**
 * @brief set the LED corresponding to hour 12 or 24 high (LED 12). T7 high , T8 low, other pins highZ
*/
static void hour_12(){
    nrf_gpio_cfg_output(TIME_7);
    nrf_gpio_cfg_output(TIME_8);
    nrf_gpio_pin_write	(TIME_7,1);
    nrf_gpio_pin_write	(TIME_8,0);			
}


/**
 * @brief set the LED corresponding to minute 5 high (LED 13). T1 low , T2 high, other pins highZ
*/
static void min_5(){
    nrf_gpio_cfg_output(TIME_1);
    nrf_gpio_cfg_output(TIME_2);
    nrf_gpio_pin_write	(TIME_1,0);
    nrf_gpio_pin_write	(TIME_2,1);			
}

/**
 * @brief set the LED corresponding to minute 10 (LED 14). T1 low , T3 high, other pins highZ
*/
static void min_10(){
    nrf_gpio_cfg_output(TIME_1);
    nrf_gpio_cfg_output(TIME_3);
    nrf_gpio_pin_write	(TIME_1,0);
    nrf_gpio_pin_write	(TIME_3,1);			
}

/**
 * @brief set the LED corresponding to min 15 high (LED 15). T1 loe , T4 high, other pins highZ
*/
static void min_15(){
    nrf_gpio_cfg_output(TIME_1);
    nrf_gpio_cfg_output(TIME_4);
    nrf_gpio_pin_write	(TIME_1,0);
    nrf_gpio_pin_write	(TIME_4,1);			
}

/**
 * @brief set the LED corresponding to min 20 high (LED 16). T2 low , T3 high, other pins highZ
*/
static void min_20(){
    nrf_gpio_cfg_output(TIME_2);
    nrf_gpio_cfg_output(TIME_3);
    nrf_gpio_pin_write	(TIME_2,0);
    nrf_gpio_pin_write	(TIME_3,1);			
}

/**
 * @brief set the LED corresponding to min25 high (LED 17). T2 low , T4 high, other pins highZ
*/
static void min_25(){
    nrf_gpio_cfg_output(TIME_2);
    nrf_gpio_cfg_output(TIME_4);
    nrf_gpio_pin_write	(TIME_2,0);
    nrf_gpio_pin_write	(TIME_4,1);			
}

/**
 * @brief set the LED corresponding to min 30 (LED 18). T2 low , T4 high, other pins highZ
*/
static void min_30(){
    nrf_gpio_cfg_output(TIME_3);
    nrf_gpio_cfg_output(TIME_4);
    nrf_gpio_pin_write	(TIME_3,0);
    nrf_gpio_pin_write	(TIME_4,1);			
}
/**
 * @brief set the LED corresponding to min 35 high (LED 19). T5 low , T6 high, other pins highZ
*/
static void min_35(){
    nrf_gpio_cfg_output(TIME_5);
    nrf_gpio_cfg_output(TIME_6);
    nrf_gpio_pin_write	(TIME_5,0);
    nrf_gpio_pin_write	(TIME_6,1);			
}

/**
 * @brief set the LED corresponding to min_40 high (LED 20). T5 low , T7 high, other pins highZ
*/
static void min_40(){
    nrf_gpio_cfg_output(TIME_5);
    nrf_gpio_cfg_output(TIME_7);
    nrf_gpio_pin_write	(TIME_5,0);
    nrf_gpio_pin_write	(TIME_7,1);			
}

/**
 * @brief set the LED corresponding to min 45 high (LED 21). T5 low , T8 high, other pins highZ
*/
static void min_45(){
    nrf_gpio_cfg_output(TIME_5);
    nrf_gpio_cfg_output(TIME_8);
    nrf_gpio_pin_write	(TIME_5,0);
    nrf_gpio_pin_write	(TIME_8,1);			
}

/**
 * @brief set the LED corresponding to min 50 high (LED 22). T6 low , T7 high, other pins highZ
*/
static void min_50(){
    nrf_gpio_cfg_output(TIME_6);
    nrf_gpio_cfg_output(TIME_7);
    nrf_gpio_pin_write	(TIME_6,0);
    nrf_gpio_pin_write	(TIME_7,1);			
}

/**
 * @brief set the LED corresponding to min55 high (LED 23). T6 low , T8 high, other pins highZ
*/
static void min_55(){
    nrf_gpio_cfg_output(TIME_6);
    nrf_gpio_cfg_output(TIME_8);
    nrf_gpio_pin_write	(TIME_6,0);
    nrf_gpio_pin_write	(TIME_8,1);			
}

/**
 * @brief set the LED corresponding to min 0 high (LED 24). T7 low , T8 high, other pins highZ
*/
static void min_0(){
    nrf_gpio_cfg_output(TIME_7);
    nrf_gpio_cfg_output(TIME_8);
    nrf_gpio_pin_write	(TIME_7,0);
    nrf_gpio_pin_write	(TIME_8,1);			
}

/**
 * @brief displays the time for 5 seconds, by rounding to the closest 5min
*/
void show_time(uint32_t hour, uint32_t minutes){
    //turn off all LEDs
    clear_watch_leds();

    switch (hour){
        case 0:
            hour_12(); 
            break;
        case 1:
            hour_1(); 
            break;
        case 2:
            hour_2(); 
            break;
        case 3:
            hour_3(); 
            break;
        case 4:
            hour_4(); 
            break;
        case 5:
            hour_5(); 
            break;
        case 6:
            hour_6(); 
            break;
        case 7:
            hour_7(); 
            break;
        case 8:
            hour_8(); 
            break;
        case 9:
            hour_9(); 
            break;
        case 10:
            hour_10(); 
            break;
        case 11:
            hour_11(); 
            break;
        case 12:
            hour_12(); 
            break;
        case 13:
            hour_1(); 
            break;
        case 14:
            hour_2(); 
            break;
        case 15:
            hour_3(); 
            break;
        case 16:
            hour_4(); 
            break;
        case 17:
            hour_5(); 
            break;
        case 18:
            hour_6(); 
            break;
        case 19:
            hour_7(); 
            break;
        case 20:
            hour_8(); 
            break;
        case 21:
            hour_9(); 
            break;
        case 22:
            hour_10(); 
            break;
        case 23:
            hour_11(); 
            break;
    } 

// round ing to the neareast 5min mark
uint32_t close_5 = 5*(uint32_t)((minutes+2.5)/5); //(dividend + (divisor / 2)) / divisor, by casting it to in we remove the decimal part of the division result and by re-multiplying by 5 we get the closest 5 min mark

switch (close_5){
        case 0:
            min_0(); 
            break;
        case 5:
            min_5(); 
            break;
        case 10:
            min_10(); 
            break;
        case 15:
            min_15(); 
            break;
        case 20:
            min_20(); 
            break;
        case 25:
            min_25(); 
            break;
        case 30:
            min_30(); 
            break;
        case 35:
            min_35(); 
            break;
        case 40:
            min_40(); 
            break;
        case 45:
            min_45(); 
            break;
        case 50:
            min_50(); 
            break;
        case 55:
            min_55(); 
            break;
        case 60:
            min_0(); 
            break;
    }
    // wait 5 seconds
    nrf_delay_ms(5000);

    //turn off all LEDs
    clear_watch_leds();
}

/**
 * @brief get all the Hour LEDs to light up in sequence clockwise for one loop
*/
void hour_loop(){

    clear_watch_leds();
    hour_1();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_2();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_3();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_4();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_5();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_6();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_7();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_8();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_9();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_10();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_11();
    nrf_delay_ms(500);

    clear_watch_leds();
    hour_12();
    nrf_delay_ms(500);

    clear_watch_leds();
}

/**
 * @brief get all the minutes  LEDs to light up in sequence clockwise for one loop
*/
void minutes_loop(){

    clear_watch_leds();
    min_5();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_10();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_15();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_20();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_25();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_30();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_35();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_40();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_45();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_50();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_55();
    nrf_delay_ms(500);

    clear_watch_leds();
    min_0();
    nrf_delay_ms(500);

    clear_watch_leds();
}