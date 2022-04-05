/*
 * cli.h
 *
 *  Created on: 2022. 4. 5.
 *      Author: uylee
 */

#ifndef SRC_COMMON_HW_INCLUDE_CLI_H_
#define SRC_COMMON_HW_INCLUDE_CLI_H_


#include "hw_def.h"


#ifdef _USE_HW_CLI

#define CLI_CMD_LIST_MAX      HW_CLI_CMD_LIST_MAX     //추가 하고자하는 명령어의 갯수
#define CLI_CMD_NAME_MAX      HW_CLI_CMD_NAME_MAX     //명령어 하나당 몇 자까지 허용할 것인가?

#define CLI_LINE_HIS_MAX      HW_CLI_LINE_HIS_MAX
#define CLI_LINE_BUF_MAX      HW_CLI_LINE_BUF_MAX



//명령어 하나당 함수 하나가 등록이 됩니다.그때 그 함수에 넘겨줄 파라미터 구조체
typedef struct
{
  uint16_t   argc;  //아규먼트의 갯수
  char     **argv;  //아규먼트의 문자열

  int32_t  (*getData)(uint8_t index);
  float    (*getFloat)(uint8_t index);
  char    *(*getStr)(uint8_t index);
  bool     (*isStr)(uint8_t index, char *p_str);
} cli_args_t;


bool cliInit(void);
bool cliOpen(uint8_t ch, uint32_t baud);
bool cliOpenLog(uint8_t ch, uint32_t baud);
bool cliMain(void);
void cliPrintf(const char *fmt, ...);
bool cliAdd(const char *cmd_str, void (*p_func)(cli_args_t *));
bool cliKeepLoop(void);

#endif

#endif /* SRC_COMMON_HW_INCLUDE_CLI_H_ */
