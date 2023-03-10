/*
 * io.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#include "io.h"
#include "stm32f1xx_hal.h"



void io_init(BSP_IO *p_io,void* driver,uint16_t pin){
	p_io->driver = driver;
	p_io->pin = pin;
}
void io_write(BSP_IO *p_io,BSP_IO_State_t state){
	HAL_GPIO_WritePin((GPIO_TypeDef*)p_io->driver, p_io->pin, state);
}
BSP_IO_State_t io_read(BSP_IO *p_io){
	GPIO_PinState state = HAL_GPIO_ReadPin((GPIO_TypeDef*)p_io->driver, p_io->pin);
	return (BSP_IO_State_t) state;
}
