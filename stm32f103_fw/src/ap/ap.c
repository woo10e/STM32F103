/*
 * ap.c
 *
 *  Created on: Mar 29, 2022
 *      Author: uylee
 */


#include "ap.h"




void apInit(void)
{
  uartOpen(_DEF_UART1, 115200);  //USB
  uartOpen(_DEF_UART2, 115200); //UART
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
      ledToggle(_DEF_LED2);
      ledToggle(_DEF_LED3);

//      logPrintf("logPrintf test\n");
//      logPrintf("logPrintf test %d\n", (int)millis());
    }
  }
}
