/*
 * led.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "led.h"

static void led_on_impl(Led *p_led);
static void led_off_impl(Led *p_led);

void led_init(Led *p_led,BSP_IO *p_io){
	p_led->p_io = p_io;
	p_led->on = led_on_impl;
	p_led->off = led_off_impl;
}

static void led_on_impl(Led *p_led){
	io_write(p_led->p_io,BSP_IO_SET);
}
static void led_off_impl(Led *p_led){
	io_write(p_led->p_io,BSP_IO_RESET);
}
