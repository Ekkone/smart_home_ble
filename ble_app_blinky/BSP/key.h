/*
 * @Author: Ekko
 * @Date: 2019-10-21 22:50:32
 * @LastEditTime: 2019-11-01 14:10:40
 * @Description: 
 */
#ifndef __key_h
#define __key_h
#include "nrf.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"

#define TCH		12
#define KEY1	13
#define KEY2	14
#define KEY3	15
#define KEY4	16

void KEY_Init(void);
void TCH_Init(void);
uint8_t KEY_Press(uint8_t num);
uint8_t Touch_Press(void);

#endif
