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
  rtcInit();

  resetInit();
  ledInit();
  usbInit();

  flashInit();

}
