/*
 * hw_def.h
 *
 *  Created on: Mar 29, 2022
 *      Author: uylee
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "def.h"
#include "bsp.h"


#define _USE_HW_USB
#define _USE_HW_RTC
#define _USE_HW_RESET
#define _USE_HW_CDC
#define _USE_HW_FLASH

#define _USE_HW_LED
#define       HW_LED_MAX_CH         3

#define _USE_HW_UART
#define       HW_UART_MAX_CH        2

#define _USE_HW_CLI
#define      HW_CLI_CMD_NAME_MAX    16    //명령어 이름을 15자까지 허용한다. 바이트배열에 한글자 빼고 해서
#define      HW_CLI_CMD_LIST_MAX    16    //명령어의 갯수 16개까지 하겠다.
#define      HW_CLI_LINE_HIS_MAX    4
#define      HW_CLI_LINE_BUF_MAX    32




#endif /* SRC_HW_HW_DEF_H_ */
