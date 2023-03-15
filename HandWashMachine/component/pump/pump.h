/*
 * pump.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef COMPONENT_PUMP_PUMP_H_
#define COMPONENT_PUMP_PUMP_H_

#include "stdio.h"
#include "stdlib.h"
#include "io/io.h"

typedef struct Pump_t Pump;

struct Pump_t{
	BSP_IO *p_io;
	void (*on)(Pump *p_Pump);
	void (*off)(Pump *p_Pump);
};

void Pump_init(Pump *p_Pump,BSP_IO *p_io);
static inline void Pump_on(Pump *p_Pump){
	p_Pump->on(p_Pump);
}
static inline void Pump_off(Pump *p_Pump){
	p_Pump->off(p_Pump);
}

#endif /* COMPONENT_PUMP_PUMP_H_ */
