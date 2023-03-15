/*
 * adc.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "adc.h"
#include "stm32f1xx_hal.h"

extern ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef* p_adc_driver = &hadc1;
uint32_t adc_val = 0;
uint8_t adc_is_busy = 0;

void bsp_adc_init(BSP_Adc *p_adc,uint8_t channel,uint32_t vref,uint32_t gain){
	p_adc->channel = channel;
	p_adc->gain = gain;
	p_adc->vref = vref;
}
int bsp_adc_start(BSP_Adc *p_adc){
	if(adc_is_busy == 0){
		adc_is_busy = 1;
		HAL_ADC_Start_IT(p_adc_driver);
		return 1;
	}
	return 0;
}
int bsp_adc_stop(BSP_Adc *p_adc){
	HAL_ADC_Stop_IT(p_adc_driver);
	return 1;
}
uint32_t bsp_adc_read(BSP_Adc *p_adc){
	p_adc->adc_val = (adc_val*p_adc->gain);
	return p_adc->adc_val;
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){
	if(hadc->Instance == p_adc_driver->Instance){
		adc_val = HAL_ADC_GetValue(p_adc_driver);
		adc_is_busy = 0;
		HAL_ADC_Stop(p_adc_driver);
	}
}
