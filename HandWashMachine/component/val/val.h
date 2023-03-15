/*
 * val.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef COMPONENT_VAL_VAL_H_
#define COMPONENT_VAL_VAL_H_

#include "adc/adc.h"
#include "stdio.h"
#include "stdint.h"

typedef struct Val_t Val;

struct Val_t{
	BSP_Adc *p_adc;
	uint32_t value;
};

void val_init(Val *p_val, BSP_Adc *p_adc);
void val_update(Val *p_val);
uint32_t val_get(Val *p_val);

#endif /* COMPONENT_VAL_VAL_H_ */
