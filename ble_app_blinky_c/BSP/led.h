/*
 * @Author: Ekko
 * @Date: 1970-01-01 08:00:00
 * @LastEditTime: 2019-11-09 21:47:15
 * @Description:  */
#ifndef __LED_H
#define	__LED_H

#include "nrf.h"


#define LED_RED           17
#define LED_GREEN         18
#define LED_BLUE          19

void LED_Init(void);
void LED_Open(int LED_X);
void LED_Close(int LED_X);
void LED_Toggle(int LED_X);
//void LED2_Open(void);
//void LED2_Close(void);
//void LED2_Toggle(void);



#endif /* __LED_H */

