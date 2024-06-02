
extern "C"
{
#include "main.h"
}

#include "mcal.h"
#include "motor.h"

enum Status
{
	pressed,
	notPressed = 1
};

class Button
{
public:
	Button(GPIO_TypeDef * Button, uint8_t pin) : Button_Port(Button), button_pin(pin)
	{
		if(pin < 8)
		{
			Button_Port->CRL = (INPUT_FLOATING << pin);
		}
		else
		{
			Button_Port->CRH = (INPUT_FLOATING << pin);
		}
	}

	Status get_Button_Status()
	{
		return static_cast<Status>(Button_Port->IDR & (1 << 4)); //Bit masking
	}
private:
	GPIO_TypeDef * Button_Port;
	uint8_t button_pin;
};

class OutputBase
{
public:
	virtual void Initialize() = 0;
	virtual void setStatusHigh() = 0;
	virtual void setStatusLow() = 0;
};

const Motor_Config motor_config
{
	GPIOA,
	GPIOB,
	GPIOA,
	5,
	1,
	6
};

class LED : public OutputBase
{
private:
	GPIO_TypeDef * LED_PORT;
	uint8_t led_pin;

public:
	LED(GPIO_TypeDef * Led, uint8_t pin) : LED_PORT(Led), led_pin(pin)
	{
//		RCC->APB2ENR |= RCC_GPIOC_EN;
	}
	void Initialize()
	{
		GPIOC->CRH = (OUTPUT_MAX_SPEED_50 << PIN_C13);
	}

	void setStatusHigh()
	{
		LED_PORT->ODR = (1 << led_pin);
	}
	void setStatusLow()
	{
		LED_PORT->ODR &=~ (1 << led_pin);
	}
};




void delay(unsigned int delay_time)
{
	for(unsigned int i = 0; i < delay_time; i++);
}

int main(void)
{

	unsigned int delay_time = 100000;
  //clock gating for GPIOC and GPIOB
  RCC->APB2ENR = RCC_GPIOC_EN | RCC_GPIOB_EN | RCC_GPIOA_EN;
  //pin B4 as input floating pin
//  GPIOB->CRL = (INPUT_FLOATING << PIN_B4);
//  GPIOC->CRH = (OUTPUT_MAX_SPEED_50 << PIN_C13);
//  GPIOB->CRH = (OUTPUT_MAX_SPEED_50 << PIN_B9);
  GPIOA->CRL = (OUTPUT_MAX_SPEED_50 << PIN_A1) | (OUTPUT_MAX_SPEED_50 << PIN_A2) | (OUTPUT_MAX_SPEED_50 << PIN_A3);
  Button button_b4(GPIOB, PIN_B4);
  LED led(GPIOC, PIN_C13);

  while (1)
  {

	  Status value = button_b4.get_Button_Status();
//
	  if(value == pressed)
	  {
////		  GPIOB->ODR = (SHIFT_STEPs << BUZZER_PIN);
//		  led.setStatusHigh();
////		  GPIOA->ODR |= (SHIFT_STEPs << RGB_PIN_1) | (SHIFT_STEPs << RGB_PIN_2) | (1 << RGB_PIN_3);
//
//		  led.setStatusLow();
//		  GPIOA->ODR &=~ (SHIFT_STEPs << RGB_PIN_1) & (SHIFT_STEPs << RGB_PIN_2) & (SHIFT_STEPs << RGB_PIN_3);
	  	  GPIOA->ODR |= (SHIFT_STEPs << RGB_PIN_1) | (SHIFT_STEPs << RGB_PIN_2) | (1 << RGB_PIN_3);
	  	  delay(delay_time);
	  	  GPIOA->ODR &=~ (SHIFT_STEPs << RGB_PIN_1) & (SHIFT_STEPs << RGB_PIN_2) & (SHIFT_STEPs << RGB_PIN_3);
	  	  delay(delay_time);
	  }
	  else
	  {
		  GPIOA->ODR &=~ (1 << 1) & (1 << 3) & (1 << 2);
//		  led.setStatusLow();
//		  GPIOB->ODR &=~ (1 << 9);
		  delay(delay_time);
	  }
  }

}

