/*
 * rtc.h
 *
 *  Created on: 2022. 3. 31.
 *      Author: uylee
 */

#ifndef SRC_COMMON_HW_INCLUDE_RTC_H_
#define SRC_COMMON_HW_INCLUDE_RTC_H_

#include "hw_def.h"

#ifdef _USE_HW_RTC


bool rtcInit(void);

uint32_t rtcBackupRegRead(uint32_t index);
void 	 rtcBackupRegWrite(uint32_t index, uint32_t data);


#endif

#endif /* SRC_COMMON_HW_INCLUDE_RTC_H_ */
