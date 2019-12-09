/*
 * @Author: Ekko
 * @Date: 2019-10-21 22:50:32
 * @LastEditTime: 2019-11-01 14:18:35
 * @Description: 
 */
#ifndef __key_h
#define __key_h
#include "nrf.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"

#define KEY	13

void KEY_Init(void);
uint8_t KEY_Press(void);

#endif
