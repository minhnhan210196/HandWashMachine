/*
 * val.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "val.h"


void val_init(Val *p_val, BSP_Adc *p_adc){
	p_val->p_adc = p_adc;
	p_val->value = 0;
}
void val_update(Val *p_val){
	bsp_adc_start(p_val->p_adc);
}
uint32_t val_get(Val *p_val){
	p_val->value = bsp_adc_read(p_val->p_adc);
	return p_val->value;
}
