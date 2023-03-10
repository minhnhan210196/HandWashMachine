################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HandWashMachine/app/handwashmachine/handwashmachine.c 

OBJS += \
./HandWashMachine/app/handwashmachine/handwashmachine.o 

C_DEPS += \
./HandWashMachine/app/handwashmachine/handwashmachine.d 


# Each subdirectory must supply rules for building sources it contributes
HandWashMachine/app/handwashmachine/%.o HandWashMachine/app/handwashmachine/%.su HandWashMachine/app/handwashmachine/%.cyclo: ../HandWashMachine/app/handwashmachine/%.c HandWashMachine/app/handwashmachine/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/app" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/board" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/component" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/service" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HandWashMachine-2f-app-2f-handwashmachine

clean-HandWashMachine-2f-app-2f-handwashmachine:
	-$(RM) ./HandWashMachine/app/handwashmachine/handwashmachine.cyclo ./HandWashMachine/app/handwashmachine/handwashmachine.d ./HandWashMachine/app/handwashmachine/handwashmachine.o ./HandWashMachine/app/handwashmachine/handwashmachine.su

.PHONY: clean-HandWashMachine-2f-app-2f-handwashmachine

