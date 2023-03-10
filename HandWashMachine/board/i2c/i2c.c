/*
 * i2c.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#include "i2c.h"
#include "stm32f1xx_hal.h"

I2C_HandleTypeDef *p_i2c;
extern I2C_HandleTypeDef hi2c1;
bool i2c_tramsmiting = false;
bool i2c_receiving = false;

void i2c_init()
{
	p_i2c = &hi2c1;
	i2c_tramsmiting = false;
	i2c_receiving = false;
}
void i2c_write(char addr, uint8_t *data, uint16_t length)
{
	i2c_tramsmiting = true;
	HAL_I2C_Master_Transmit_IT(p_i2c, addr, data, length);
}
void i2c_read(char addr, uint8_t *data, uint16_t length)
{
	i2c_receiving = false;
	HAL_I2C_Master_Receive_IT(p_i2c, addr, data, length);
}


void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c){
	if(p_i2c->Instance == hi2c->Instance){
		i2c_tramsmiting = true;
	}
}

void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c){
	if(p_i2c->Instance == hi2c->Instance){
		i2c_receiving = true;
	}
}

bool i2c_writeed(){
	return i2c_tramsmiting;
}
bool i2c_readed(){
	return i2c_receiving;
}
