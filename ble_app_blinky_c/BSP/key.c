/*
 * @Author: Ekko
 * @Date: 2019-10-22 21:50:56
 * @LastEditTime: 2019-10-24 20:47:27
 * @Description: 
 */
#include "key.h"


void KEY_Init(void) {
	nrf_gpio_cfg_input(KEY,NRF_GPIO_PIN_PULLUP);
}

uint8_t KEY_Press(void) {
	if(nrf_gpio_pin_read(KEY) == 0) {
		nrf_delay_ms(100);
		if(nrf_gpio_pin_read(KEY) == 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}