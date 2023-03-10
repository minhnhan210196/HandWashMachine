################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HandWashMachine/board/flash/flash.c 

OBJS += \
./HandWashMachine/board/flash/flash.o 

C_DEPS += \
./HandWashMachine/board/flash/flash.d 


# Each subdirectory must supply rules for building sources it contributes
HandWashMachine/board/flash/%.o HandWashMachine/board/flash/%.su HandWashMachine/board/flash/%.cyclo: ../HandWashMachine/board/flash/%.c HandWashMachine/board/flash/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/app" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/board" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/component" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.12.0/Huy_Project/HandWashMachine/service" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HandWashMachine-2f-board-2f-flash

clean-HandWashMachine-2f-board-2f-flash:
	-$(RM) ./HandWashMachine/board/flash/flash.cyclo ./HandWashMachine/board/flash/flash.d ./HandWashMachine/board/flash/flash.o ./HandWashMachine/board/flash/flash.su

.PHONY: clean-HandWashMachine-2f-board-2f-flash

