/*
 * adc.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef BOARD_ADC_ADC_H_
#define BOARD_ADC_ADC_H_

typedef struct BSP_Adc_t BSP_Adc;

struct BSP_Adc_t{
	uint32_t vref;
	uint32_t adc_val;
	uint32_t gain;
	uint8_t channel;
};

void adc_init(BSP_Adc *p_adc,uint8_t channel,uint32_t vref,uint32_t gain);

uint32_t adc_read(BSP_Adc *p_adc);


#endif /* BOARD_ADC_ADC_H_ */
