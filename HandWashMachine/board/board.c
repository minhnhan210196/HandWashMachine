/*
 * board.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "board.h"

#if USING_OS
#include "FreeRTOS.h"
#include "task.h"
#else
#include "stm32f1xx_hal.h"
#endif

void delay_ms(uint32_t ms)
{
#if USING_OS
	vTaskDelay(pdMS_TO_TICKS(ms));

#else
	HAL_Delay(ms);
#endif
}
void delay_us(uint32_t us)
{
#if USING_OS
	vTaskDelay(us);
#else
	HAL_Delay(us);
#endif
}
