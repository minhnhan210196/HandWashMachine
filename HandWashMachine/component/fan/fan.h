/*
 * fan.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef COMPONENT_FAN_FAN_H_
#define COMPONENT_FAN_FAN_H_

#include "stdio.h"
#include "stdlib.h"
#include "io/io.h"

typedef struct Fan_t Fan;

struct Fan_t{
	BSP_IO *p_io;
	void (*on)(Fan *p_fan);
	void (*off)(Fan *p_fan);
};

void fan_init(Fan *p_fan,BSP_IO *p_io);
static inline void fan_on(Fan *p_fan){
	p_fan->on(p_fan);
}
static inline void fan_off(Fan *p_fan){
	p_fan->off(p_fan);
}

#endif /* COMPONENT_FAN_FAN_H_ */
