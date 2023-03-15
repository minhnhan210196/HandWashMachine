/*
 * adc.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef BOARD_ADC_ADC_H_
#define BOARD_ADC_ADC_H_
#include "stdint.h"

typedef struct BSP_Adc_t BSP_Adc;

struct BSP_Adc_t{
	uint32_t vref;
	uint32_t adc_val;
	uint32_t gain;
	uint8_t channel;
};

void bsp_adc_init(BSP_Adc *p_adc,uint8_t channel,uint32_t vref,uint32_t gain);
int bsp_adc_start(BSP_Adc *p_adc);
int bsp_adc_stop(BSP_Adc *p_adc);
uint32_t bsp_adc_read(BSP_Adc *p_adc);


#endif /* BOARD_ADC_ADC_H_ */
