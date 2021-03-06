/*
 * bsp.h
 *
 *  Created on: Mar 29, 2022
 *      Author: uylee
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#include "def.h"

#define _USE_LOG_PRINT   1  //로그프린트에프 키는 것은 1 끄는 것은 0

#if _USE_LOG_PRINT
#define logPrintf(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define logPrintf(fmt, ...)
#endif


#include "stm32f1xx_hal.h"


void bspInit(void);

void delay(uint32_t ms);
uint32_t millis(void);

void Error_Handler(void);

#endif /* SRC_BSP_BSP_H_ */
