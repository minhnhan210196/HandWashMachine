################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HandWashMachine/component/bluetooth/bluetooth.c 

OBJS += \
./HandWashMachine/component/bluetooth/bluetooth.o 

C_DEPS += \
./HandWashMachine/component/bluetooth/bluetooth.d 


# Each subdirectory must supply rules for building sources it contributes
HandWashMachine/component/bluetooth/%.o HandWashMachine/component/bluetooth/%.su HandWashMachine/component/bluetooth/%.cyclo: ../HandWashMachine/component/bluetooth/%.c HandWashMachine/component/bluetooth/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/app" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/board" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/component" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/service" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HandWashMachine-2f-component-2f-bluetooth

clean-HandWashMachine-2f-component-2f-bluetooth:
	-$(RM) ./HandWashMachine/component/bluetooth/bluetooth.cyclo ./HandWashMachine/component/bluetooth/bluetooth.d ./HandWashMachine/component/bluetooth/bluetooth.o ./HandWashMachine/component/bluetooth/bluetooth.su

.PHONY: clean-HandWashMachine-2f-component-2f-bluetooth

