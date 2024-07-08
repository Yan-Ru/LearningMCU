/*
 * i2c_driver.c
 *
 *  Created on: Jul 1, 2024
 *      Author: harrison.chen
 */
#include "stm32f750xx_i2c_driver.h"

#define I2C_TIMING 0x60302730

void I2C_StructInit(I2C_InitTypeDef* I2C_InitStruct)
{

    I2C_InitStruct->PeripheralMode  = 0x00;
	I2C_InitStruct->Timing          = I2C_TIMING;
	I2C_InitStruct->AnalogFilter    = 0x00;
	I2C_InitStruct->DigitalFilter   = 0x00;
	I2C_InitStruct->OwnAddress1     = 0x00;
	I2C_InitStruct->TypeAcknowledge = 0x00;
	I2C_InitStruct->OwnAddrSize     = 0x00;
}

void I2C_Init(I2C_TypeDef *I2Cx, I2C_InitTypeDef *I2C_InitStruct)
{

	I2Cx->CR1      = 0x0;

	I2Cx->CR1	   &= ~(1 << 12 | 15 << 8);
	I2Cx->CR1      |= (I2C_InitStruct->AnaloFilter << 12 | I2C_InitStruct->DigitalFilter << 8);

	I2Cx->TIMINGR  = I2C_InitStruct->Timing;

	I2Cx->CR1      |= 0x1;

	I2Cx->OAR1     &= ~(1 << 15);
	I2Cx->OAR1     &= ~(0x1111111111);




}


