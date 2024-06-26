
extern "C"
{
	#include "main.h"
}
#include "mcal.h"
#include "button.h"
#include "led.h"

void vRCC_APP2_Enable_Clock(bool enable,uint8_t PORT);

int main(void)
{
	vRCC_APP2_Enable_Clock(1 , RCC_IOPA);
	vRCC_APP2_Enable_Clock(1 , RCC_IOPB);
	vRCC_APP2_Enable_Clock(1 , RCC_IOPC);

	LED led1(GPIOA, LED_PIN_NUMBER_PA2);
	LED led2(GPIOC, LED_PIN_NUMBER_C13);

	Button btn(GPIOB, BUTTON_PIN_NUMBER_BB4);

  while (1)
  {
	  if(!btn.xGetButtonStatus())
	  {
		  led1.LedON();
		  led2.LedON();
		  delayMS(100000);
	  	  led1.LedOFF();
		  led2.LedOFF();
		  delayMS(100000);
	  }
	  else
	  {
		  led1.LedOFF();
		  led2.LedOFF();
	  }
  }
}

void vRCC_APP2_Enable_Clock(bool enable,uint8_t PORT)
{
	if(enable)
	{
		RCC->APB2ENR |=  (1 << PORT);
	}
	else
	{
		RCC->APB2ENR &= ~(1 << PORT);
	}
}

void delayMS(unsigned int ticks)
{
	for(unsigned int i = 0; i < ticks; i++);
}

