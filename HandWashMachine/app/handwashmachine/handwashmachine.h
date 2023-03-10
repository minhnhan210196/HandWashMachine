/*
 * handwashmachine.h
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#ifndef APP_HANDWASHMACHINE_HANDWASHMACHINE_H_
#define APP_HANDWASHMACHINE_HANDWASHMACHINE_H_

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
};

void hwm_init(HandWashMachine *p_hwm);
void hwm_set_state(HandWashMachine *p_hwm);
HandWashMachineState hwm_get_state(HandWashMachine *p_hwm);


#endif /* APP_HANDWASHMACHINE_HANDWASHMACHINE_H_ */
