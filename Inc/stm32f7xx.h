/*
 * stm32f7xx.h
 *
 *  Created on: Jul 1, 2024
 *      Author: harrison.chen
 */

#ifndef STM32F7XX_H_
#define STM32F7XX_H_

#include <stdint.h>
#include "stm32f750xx_i2c_driver.h"

#define RCC_BASE      ((uint32_t)0x58024400)
#define GPIOD_BASE    ((uint32_t)0x58020C00)

#define RCC_APB4RSTR  *(unsigned int *)(RCC_BASE + 0x9c)
#define RCC_AHB4RSTR  *(unsigned int *)(RCC_BASE + 0x88)

#define RCC_APB4ENR   *(unsigned int *)(RCC_BASE + 0xF4)
#define RCC_AHB4ENR   *(unsigned int *)(RCC_BASE + 0xE0)

#define GPIOD_MODER   *(unsigned int *)(GPIOD_BASE + 0x00)
#define GPIOD_OTYPER  *(unsigned int *)(GPIOD_BASE + 0x04)
#define GPIOD_OSPEEDR *(unsigned int *)(GPIOD_BASE + 0x08)
#define GPIOD_PUPDR   *(unsigned int *)(GPIOD_BASE + 0x0C)
#define GPIOD_AFRH    *(unsigned int *)(GPIOD_BASE + 0x2)

typedef struct
{
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t OAR1;
	volatile uint32_t OAR2;
	volatile uint32_t TIMINGR;
	volatile uint32_t TIMEOUTR;
	volatile uint32_t ISR;
	volatile uint32_t ICR;
	volatile uint32_t PECR;
	volatile uint32_t RXDR;
	volatile uint32_t TXDR;

}I2C_TypeDef;


#endif /* STM32F7XX_H_ */
