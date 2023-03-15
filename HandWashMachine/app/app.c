/*
 * app.c
 *
 *  Created on: Mar 10, 2023
 *      Author: Admin
 */

#include "app.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "handwashmachine/handwashmachine.h"

// static variable
static HandWashMachine handwashmachine;


// static task_handle
static TaskHandle_t hand_wash_machine_handle;
static TaskHandle_t read_sensor_handle;
static TaskHandle_t read_val_handle;
static TaskHandle_t display_handle;
static TaskHandle_t bluetooth_handle;

// static funtion
static void Hand_Wash_Machine_Process(void *arg);
static void Read_Sensor_Process(void *arg);
static void Read_Val_Process(void* arg);
static void Display_Process(void *arg);
static void Bluetooth_Process(void *arg);

void app_init(void){
	hwm_init(&handwashmachine);
	xTaskCreate(Hand_Wash_Machine_Process,"hand_wash_process",256, (void*)&handwashmachine,configMAX_PRIORITIES,&hand_wash_machine_handle);
	xTaskCreate(Read_Sensor_Process, "read_sensor", 128,(void*)&handwashmachine,configMAX_PRIORITIES,&read_sensor_handle);
	xTaskCreate(Read_Val_Process, "read_val", 128,(void*)&handwashmachine,configMAX_PRIORITIES,&read_val_handle);
	xTaskCreate(Display_Process, "display", 128,(void*)&handwashmachine,configMAX_PRIORITIES,&display_handle);
	xTaskCreate(Bluetooth_Process, "bluetooth", 128,(void*)&handwashmachine,configMAX_PRIORITIES,&bluetooth_handle);
}

static void Hand_Wash_Machine_Process(void *arg){
	HandWashMachine *p_hwm = (HandWashMachine*) arg;
	for(;;){
		switch (hwm_get_state(p_hwm)){
			case HWM_Init:

				break;
			case HWM_Standby:

				break;
			case HWM_Run:

				break;
			case HWM_Setting:

				break;
			default:
				break;
		}
		vTaskDelay(1);
	}
}
static void Read_Sensor_Process(void *arg){
	HandWashMachine *p_hwm = (HandWashMachine*) arg;
	for(;;){

		vTaskDelay(1);
	}
}
static void Display_Process(void *arg){
	for(;;){
		vTaskDelay(1);
	}
}
static void Bluetooth_Process(void *arg){
	for(;;){
		vTaskDelay(1);
	}
}
static void Read_Val_Process(void* arg){
	HandWashMachine *p_hwm = (HandWashMachine*) arg;
	for(;;){
		val_update(p_hwm->p_val);
		vTaskDelay(pdMS_TO_TICKS(100));
	}
}
