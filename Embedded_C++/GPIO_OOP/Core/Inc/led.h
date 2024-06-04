/*
 * led.h
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "mcal.h"
#include "main.h"

class LED
{
public:
	LED(GPIO_TypeDef * PORT, uint8_t pin);

	void LedON();

	void LedOFF();

	void initialization();

private:
	GPIO_TypeDef * LED_PORT;
	uint8_t pinNumber;
};


#endif /* INC_LED_H_ */