/*
 * led.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef COMPONENT_LED_LED_H_
#define COMPONENT_LED_LED_H_

#include "stdio.h"
#include "stdlib.h"
#include "io/io.h"

typedef struct Led_t Led;

struct Led_t{
	BSP_IO *p_io;
	void (*on)(Led *p_led);
	void (*off)(Led *p_led);
};

void led_init(Led *p_led,BSP_IO *p_io);
static inline void led_on(Led *p_led){
	p_led->on(p_led);
}
static inline void led_off(Led *p_led){
	p_led->off(p_led);
}

#endif /* COMPONENT_LED_LED_H_ */
