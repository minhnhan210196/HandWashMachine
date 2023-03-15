/*
 * pump.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "pump.h"


static void Pump_on_impl(Pump *p_Pump);
static void Pump_off_impl(Pump *p_Pump);

void Pump_init(Pump *p_Pump,BSP_IO *p_io){
	p_Pump->p_io = p_io;
	p_Pump->on = Pump_on_impl;
	p_Pump->off = Pump_off_impl;
}

static void Pump_on_impl(Pump *p_Pump){
	io_write(p_Pump->p_io,BSP_IO_SET);
}
static void Pump_off_impl(Pump *p_Pump){
	io_write(p_Pump->p_io,BSP_IO_RESET);
}
