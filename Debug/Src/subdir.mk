################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/stm32f750xx_gpio_driver.c \
../Src/stm32f750xx_i2c_driver.c \
../Src/sysmem.c 

OBJS += \
./Src/main.o \
./Src/stm32f750xx_gpio_driver.o \
./Src/stm32f750xx_i2c_driver.o \
./Src/sysmem.o 

C_DEPS += \
./Src/main.d \
./Src/stm32f750xx_gpio_driver.d \
./Src/stm32f750xx_i2c_driver.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32H750B_DK -DSTM32H7SINGLE -DSTM32H750XBHx -DSTM32H7 -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/stm32f750xx_gpio_driver.cyclo ./Src/stm32f750xx_gpio_driver.d ./Src/stm32f750xx_gpio_driver.o ./Src/stm32f750xx_gpio_driver.su ./Src/stm32f750xx_i2c_driver.cyclo ./Src/stm32f750xx_i2c_driver.d ./Src/stm32f750xx_i2c_driver.o ./Src/stm32f750xx_i2c_driver.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

