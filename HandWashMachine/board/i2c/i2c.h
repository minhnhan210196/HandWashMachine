/*
 * i2c.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef BOARD_I2C_I2C_H_
#define BOARD_I2C_I2C_H_
#include "stdint.h"
#include "stdbool.h"

void i2c_init();
void i2c_write(char addr,uint8_t *data,uint16_t length);
void i2c_read(char addr,uint8_t *data,uint16_t length);
bool i2c_writeed();
bool i2c_readed();
#endif /* BOARD_I2C_I2C_H_ */
