
#include "usart.h"
void Led_Init()
{
	RCC->APB2ENR = (1 << 4);
	GPIOC->CRH = (3 << 20);
	GPIOC->CRH = (3 << 24);
}


int main(void)
{
  Led_Init();
  Usart *bleutooth = new(USART1_Instance) Usart(USART1_Instance);

  while (1)
  {
	  if(bleutooth->read() == 'W')
	    {
			  bleutooth->sendString("Front LED is ON\r\n");
			  GPIOC->ODR = (1 << 13);
	    }
	    else if(bleutooth->read() == 'w')
	    {
			  bleutooth->sendString("Front LED is OFF\r\n");
			  GPIOC->ODR &= ~(1 << 13);
	    }
	    else if(bleutooth->read() == 'U')
	    {
	    	  bleutooth->sendString("Back LED is OFF\r\n");
	    	  GPIOC->ODR &= ~(1 << 14);
	    }
	    else if(bleutooth->read() == 'u')
	    {
	    	  bleutooth->sendString("Back LED is OFF\r\n");
	    	  GPIOC->ODR &= ~(1 << 14);
	    }
	    else
	    {
			  bleutooth->sendString("All LEDs are OFF\r\n");
			  GPIOC->ODR &= ~(1 << 14);
			  GPIOC->ODR &= ~(1 << 13);
	    }
  }

}
