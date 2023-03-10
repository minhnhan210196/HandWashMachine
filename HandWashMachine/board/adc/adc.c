/*
 * adc.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "adc.h"
#include "stm32f1xx_hal.h"
void bsp_adc_init(BSP_Adc *p_adc,uint8_t channel,uint32_t vref,uint32_t gain){
	p_adc->channel = channel;
	p_adc->gain = gain;
	p_adc->vref = vref;
}

uint32_t bsp_adc_read(BSP_Adc *p_adc){
	return p_adc->adc_val;
}
