/*
 * button.cpp
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#include "mcal.h"
#include "button.h"
#include "main.h"

Button::Button(GPIO_TypeDef * port, uint8_t pin) : PORT(port), button_pin_number(pin)
{
	initialization();

	/* Initialize output data register */
	PORT->ODR = 0x0000;
}

void Button::initialization()
{
	if (button_pin_number < 8)
	{
		PORT->CRL = (BUTTON_CONFIGURATION_AND_MODE << SHIFTED_TIMES * button_pin_number);
	}
	else if (button_pin_number > 8 && button_pin_number < 16)
	{
		PORT->CRH = (BUTTON_CONFIGURATION_AND_MODE << SHIFTED_TIMES * (button_pin_number % 8));
	}
}

Status Button::xGetButtonStatus()
{
	return static_cast<Status>(PORT->IDR & (1 << 4)); //Bit masking
}


