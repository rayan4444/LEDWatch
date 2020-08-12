#ifndef WATCH_LED_H
#define WATCH_LED_H

#include <stdint.h> 

void clear_watch_leds();
void show_time(uint32_t hour, uint32_t minutes);
void hour_loop();
void minutes_loop();

// static void hour_1();
// static void hour_2();
// static void hour_3();
// static void hour_4();
// static void hour_5();
// static void hour_6();
// static void hour_7();
// static void hour_8();
// static void hour_9();
// static void hour_10();
// static void hour_11();
// static void hour_12();

// static void min_5();
// static void min_10();
// static void min_15();
// static void min_20();
// static void min_25();
// static void min_30();
// static void min_35();
// static void min_40();
// static void min_45();
// static void min_50();
// static void min_55();
// static void min_0();


#endif //WATCH_LED_H