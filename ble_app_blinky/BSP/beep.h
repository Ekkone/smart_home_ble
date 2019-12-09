/*
 * @Author: Ekko
 * @Date: 2019-10-21 22:50:32
 * @LastEditTime: 2019-10-24 20:54:15
 * @Description: 
 */
#ifndef __beep_h
#define __beep_h
#include "nrf.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#define BEEP	12
void BEEP_Init(void);
void BEEP_Open(void);
void BEEP_Close(void);
void BEEP_Toggle(void);
#endif