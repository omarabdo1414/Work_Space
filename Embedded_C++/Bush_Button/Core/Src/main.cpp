
extern "C"
{
#include "main.h"
}

#include "mcal.h"
#include "motor.h"
#include "robot.h"

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
			Button_Port->CRL = (INPUT_FLOATING << button_pin);
		}
		else
		{
			Button_Port->CRH = (INPUT_FLOATING << button_pin);
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
		Initialize();
	}
	void Initialize()
	{
		if(led_pin < 8)
		{
			LED_PORT->CRL = (INPUT_FLOATING << led_pin);
		}
		else
		{
			LED_PORT->CRH = (INPUT_FLOATING << led_pin);
		}
		LED_PORT->CRH = (OUTPUT_MAX_SPEED_50 << PIN_C13);
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
	Button button(GPIOB, PUSH_BUTTON_PIN);
	Motor motor1(motor_config);

  while (1)
  {
	  if(!button.get_Button_Status())
	  {
		  motor1.motorMoveCW();
	  }
	  else
	  {
		  motor1.motorMoveCCW();
	  }
  }

}

