/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "stm32f7xx.h"
#include "stm32f750xx_i2c_driver.h"

I2C_InitTypeDef* I2C_initstruct;

extern void initialise_monitor_handles(void);

int main(void)
{
	initialise_monitor_handles();

	RCC_AHB4RSTR |= (1 << 3);
	RCC_APB4RSTR |= (1 << 7);
	
	RCC_AHB4ENR |= (1 << 3);
	RCC_APB4ENR |= (1 << 7);

	GPIOD_MODER   &= ~((3 << (12 * 2)) | (3 << (13 * 2))); //PD12->SCL PD13->SDA
   	GPIOD_MODER   |= ((3 << (12 * 2)) | (3 << (13 * 2)));
	GPIOD_OTYPER  |= ~((1 << 12) | (1 << 13));
	GPIOD_PUPDR   &= ~((3 << (12 * 2)) | (3 << (13 * 2)));
	GPIOD_OSPEEDR &= ~((3 << (12 * 2)) | (3 << (13 * 2)));
	GPIOD_OSPEEDR |= ((2 << (12 * 2)) | (2 << (13 * 2)));
	GPIOD_AFRH    &= ~((0xF << ((12 - 8) * 4)) | (4 << ((13 - 8) * 4)));
	GPIOD_AFRH    |= ((4 << ((12 - 8) * 4)) | (4 << ((13 - 8) * 4)));

	I2C_StructInit(I2C_initstruct);

	/* Loop forever */
	for(;;);
}
