/*
 * fan.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "fan.h"

static void fan_on_impl(Fan *p_fan);
static void fan_off_impl(Fan *p_fan);

void fan_init(Fan *p_fan,BSP_IO *p_io){
	p_fan->p_io = p_io;
	p_fan->on = fan_on_impl;
	p_fan->off = fan_off_impl;
}

static void fan_on_impl(Fan *p_fan){
	io_write(p_fan->p_io,BSP_IO_SET);
}
static void fan_off_impl(Fan *p_fan){
	io_write(p_fan->p_io,BSP_IO_RESET);
}
