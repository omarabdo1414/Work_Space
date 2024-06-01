/*
 * gpio_driver.h
 *
 *  Created on: Mar 27, 2024
 *      Author: Maydoum
 */

#ifndef INC_GPIO_DRIVER_H_
#define INC_GPIO_DRIVER_H_

#define GPIOA 0x40010800
#define GPIOB 0x40010C00
#define GPIOC 0x40011000

enum GPIO_Instance
{
	GPIOA = GPIOA_BASE
};

class GPIO
{
public:
	GPIO(GPIO_Instance gpio)
	{
		//enable RCC for GPIOA
	}
	void set_config_value(uint32_t crl, uint32_t crh)
	{
		this->CRL = crl;
		this->CRH = crh;
	}
private:
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
};


#endif /* INC_GPIO_DRIVER_H_ */
