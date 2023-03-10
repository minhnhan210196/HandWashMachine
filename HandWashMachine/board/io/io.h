/*
 * io.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef BOARD_IO_IO_H_
#define BOARD_IO_IO_H_

#include "stdint.h"

typedef enum BSP_IO_State_t{
	BSP_IO_RESET = 0,
	BSP_IO_SET = 1,
}BSP_IO_State_t;

typedef struct BSP_IO_t BSP_IO;

struct BSP_IO_t{
	uint16_t pin;
	void* driver;
};

void io_init(BSP_IO *p_io,void* driver,uint16_t pin);
void io_write(BSP_IO *p_io,BSP_IO_State_t state);
BSP_IO_State_t io_read(BSP_IO *p_io);

#endif /* BOARD_IO_IO_H_ */
