/*
 * handwashmachine.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */


#include "handwashmachine.h"


Fan fan;
Led led_blue,led_red;
Pump pump;
Val val;


void hwm_init(HandWashMachine *p_hwm){
	p_hwm->p_fan= &fan;
	p_hwm->p_pump = &pump;
	p_hwm->p_val = &val;
	p_hwm->p_led_blue = &led_blue;
	p_hwm->p_led_red = &led_red;
}
void hwm_set_state(HandWashMachine *p_hwm){
	switch (p_hwm->state) {
		case HWM_Init:

			break;
		case HWM_Run:

			break;
		case HWM_Setting:

			break;
		case HWM_Standby:

			break;
		default:
			break;
	}
}
HandWashMachineState hwm_get_state(HandWashMachine *p_hwm){
	return p_hwm->state;
}
