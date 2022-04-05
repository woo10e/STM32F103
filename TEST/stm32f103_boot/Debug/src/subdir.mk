################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c 

OBJS += \
./src/main.o 

C_DEPS += \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o src/%.su: ../src/%.c src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/ap" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/bsp" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/common" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/common/core" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/hw" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/Drivers/CMSIS/Include" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/common/hw/include" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/Middlewares/ST/STM32_USB_Device_Library/Class/DFU/Inc" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/USB_DEVICE/App" -I"D:/00_STM32/STM32F103/TEST/stm32f103_boot/src/lib/cube_f103/USB_DEVICE/Target" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src

clean-src:
	-$(RM) ./src/main.d ./src/main.o ./src/main.su

.PHONY: clean-src

