/*
 * led.cpp
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#include "mcal.h"
#include "main.h"
#include "led.h"

LED::LED(GPIO_TypeDef * PORT, uint8_t pin) : LED_PORT(PORT), pinNumber(pin)
{
	initialization();

	/* Initialize output data register */
	LED_PORT->ODR = 0x0000;
}

void LED::LedON()
{
	LED_PORT->ODR |= (1 << pinNumber);
}

void LED::LedOFF()
{
	LED_PORT->ODR &= ~(1 << pinNumber);
}

void LED::initialization()
{
	if (pinNumber < 8)
	{
		LED_PORT->CRL = (OUTPUT_MAX_SPEED_AND_CONFIGURATION << SHIFTED_TIMES * pinNumber);
	}
	else if (pinNumber > 8 && pinNumber < 16)
	{
		LED_PORT->CRH = (OUTPUT_MAX_SPEED_AND_CONFIGURATION << SHIFTED_TIMES * (pinNumber % 8));
	}
}