/*
 * button.h
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

class Button
{
public:
	Button(GPIO_TypeDef * port, uint8_t pin);

	void initialization();

	Status xGetButtonStatus();

private:
	GPIO_TypeDef * PORT;
	uint8_t button_pin_number;
};



#endif /* INC_BUTTON_H_ */