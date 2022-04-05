/*
 * ap.c
 *
 *  Created on: Mar 29, 2022
 *      Author: uylee
 */


#include "ap.h"




void apInit(void)
{
  uartOpen(_DEF_UART1, 57600);  //USB
  uartOpen(_DEF_UART2, 57600);  //UART

  cliOpen(_DEF_UART1, 57600);     //cli 용도
  cliOpenLog(_DEF_UART2, 57600);  //cli 로그용도
}



void apMain(void)
{
  uint32_t pre_time;
  uint32_t led_blink_time = 500;

  pre_time = millis();

  while(1)
  {
    if ( millis()-pre_time >= led_blink_time)
    {
      pre_time = millis();
      ledToggle(_DEF_LED1);
      //delay(500);
      //ledToggle(_DEF_LED2);
      //ledToggle(_DEF_LED3);
    }

    if (uartAvailable(_DEF_UART2) > 0)
    {
      uint8_t rx_data;
      rx_data = uartRead(_DEF_UART2);

      uartPrintf(_DEF_UART2, "Rx : 0x%X\n", rx_data);
    }

    cliMain();
  }
}
