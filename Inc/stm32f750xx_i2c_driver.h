#include "stm32f7xx.h"
#include <stdint.h>

#ifndef STM32F750XX_I2C_DRIVER_H_
#define STM32F750XX_I2C_DRIVER_H_

typedef struct
{
	
	uint32_t PeripheralMode;
	uint32_t Timing;
	uint32_t AnalogFilter;
	uint32_t DigitalFilter;
	uint32_t OwnAddress;
	uint32_t TypeAcknowledge;
	uint32_t OwnAddrSize;

}I2C_InitTypeDef;

void I2C_StructInit(I2C_InitTypeDef* I2C_InitStruct);
void I2C_Init(I2C_TypeDef I2Cx, I2C_InitTypeDef* I2C_InitStruct);


#endif /* STM32F750XX_I2C_DRIVER_H_ */
