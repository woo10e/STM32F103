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
  uartOpen(_DEF_UART2, 115200);
}

void apMain(void)
{
  uint32_t pre_time;
//  uint32_t pre_baud;
  uint32_t led_blink_time = 500;
/*
  if (resetGetCount() >= 2)
  {
    led_blink_time = 100;
  }
*/
//  pre_baud = uartGetBaud(_DEF_UART1);
  pre_time = millis();

  while(1)
  {
    if ( millis()-pre_time >= led_blink_time)
    {
      pre_time = millis();
      ledToggle(_DEF_LED1);
      //delay(500);
      ledToggle(_DEF_LED2);
      ledToggle(_DEF_LED3);
//      uartPrintf(_DEF_UART1, "ResetCount : %d\n", resetGetCount());
//      uartPrintf(_DEF_UART2, "Uart1 %d\n", millis());
    }

    if (uartAvailable(_DEF_UART1) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART1);
      uartPrintf(_DEF_UART1, "USB Rx %c %X\n", rx_data, rx_data);
    }

    if (uartAvailable(_DEF_UART2) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART2);
      uartPrintf(_DEF_UART2, "Uart1 Rx %c %X\n", rx_data, rx_data);
    }

/*
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
*/
  }
}
