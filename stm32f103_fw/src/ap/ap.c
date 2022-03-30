/*
 * ap.c
 *
 *  Created on: Mar 29, 2022
 *      Author: uylee
 */


#include "ap.h"




void apInit(void)
{
  uartOpen(_DEF_UART1, 57600);
}

void apMain(void)
{
  uint32_t pre_time;
  uint32_t pre_baud;

  pre_baud = uartGetBaud(_DEF_UART1);
  pre_time = millis();

  while(1)
  {
    if ( millis()-pre_time >= 500)
    {
      pre_time = millis();
      //ledToggle(_DEF_LED1);
      //delay(500);
      ledToggle(_DEF_LED2);
    }

    if (uartAvailable(_DEF_UART1) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART1);

      uartPrintf(_DEF_UART1, "RxData : %c 0x%X\n", rx_data, rx_data);
      uartPrintf(_DEF_UART1, "CurrentBaud : %d\n", uartGetBaud(_DEF_UART1));

    }

    if (uartGetBaud(_DEF_UART1 != pre_baud))
    {
      pre_baud = uartGetBaud(_DEF_UART1);
      uartPrintf(_DEF_UART1, "ChangedBaud : %d\n", uartGetBaud(_DEF_UART1));
    }

  }
}