/*
 * @Author: Ekko
 * @Date: 2019-10-24 20:53:26
 * @LastEditTime: 2019-10-24 20:54:07
 * @Description: 
 */
#include "beep.h"
void BEEP_Init(void) {
	nrf_gpio_cfg_output(BEEP);
}
void BEEP_Open(void) {
	nrf_gpio_pin_set(BEEP);
}
void BEEP_Close(void) {
	nrf_gpio_pin_clear(BEEP);
}
void BEEP_Toggle(void) {
	nrf_gpio_pin_toggle(BEEP);
}