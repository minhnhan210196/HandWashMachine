/*
 * handwashmachine.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef APP_HANDWASHMACHINE_HANDWASHMACHINE_H_
#define APP_HANDWASHMACHINE_HANDWASHMACHINE_H_

#include "fan/fan.h"
#include "ir_sensor/ir_sensor.h"
#include "led/led.h"
#include "pump/pump.h"
#include "val/val.h"

typedef enum{
	HWM_Init = 10,
	HWM_Standby = 20,
	HWM_Run = 30,
	HWM_Setting = 40,
}HandWashMachineState;

typedef struct HandWashMachine_t HandWashMachine;

struct HandWashMachine_t{
	char serial[32];
	float version;
	HandWashMachineState state;
	Fan *p_fan;
	Led *p_led_red;
	Led *p_led_blue;
	Pump *p_pump;
	Val *p_val;

	uint32_t time_on_fan;
	uint32_t time_on_pump;

};

void hwm_init(HandWashMachine *p_hwm);
void hwm_set_state(HandWashMachine *p_hwm);
HandWashMachineState hwm_get_state(HandWashMachine *p_hwm);


#endif /* APP_HANDWASHMACHINE_HANDWASHMACHINE_H_ */
