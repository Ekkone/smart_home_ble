/*
 * @Author: Ekko
 * @Date: 2019-10-22 21:50:56
 * @LastEditTime: 2019-11-01 14:11:15
 * @Description: 
 */
#include "key.h"


void KEY_Init(void) {
	nrf_gpio_cfg_input(KEY1,NRF_GPIO_PIN_PULLUP);
	nrf_gpio_cfg_input(KEY2,NRF_GPIO_PIN_PULLUP);
	nrf_gpio_cfg_input(KEY3,NRF_GPIO_PIN_PULLUP);
	nrf_gpio_cfg_input(KEY4,NRF_GPIO_PIN_PULLUP);
}
void TCH_Init(void) {
	nrf_gpio_cfg_input(TCH,NRF_GPIO_PIN_PULLUP);
}
uint8_t KEY_Press(uint8_t num) {
	if(nrf_gpio_pin_read(num) == 0) {
		nrf_delay_ms(100);
		if(nrf_gpio_pin_read(num) == 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
uint8_t Touch_Press(void) {
		if(nrf_gpio_pin_read(TCH) == 1)
			return 1;
		else
			return 0;
}