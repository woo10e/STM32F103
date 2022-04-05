/*
 * hw.c
 *
 *  Created on: Mar 29, 2022
 *      Author: uylee
 */


#include "hw.h"







void hwInit(void)
{
  bspInit();
  cliInit();

  rtcInit();
  resetInit();
  ledInit();
  usbInit();
  uartInit();
  flashInit();

}
