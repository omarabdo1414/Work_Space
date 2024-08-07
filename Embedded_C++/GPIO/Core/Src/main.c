#include "main.h"
#define PIN_NUMBER 2
#define BUTTON_PIN_NUMBER 4

int main(void)
{
	RCC->APB2ENR =(1 << 2) | (1 << 3) | (1 << 4);
	GPIOC->CRH = 0x00300000; // pin 13
	GPIOA->CRL = (0X3 << 4 * PIN_NUMBER);// 0x00000030

  while (1)
  {
	  if(!(GPIOB->IDR & (1 << BUTTON_PIN_NUMBER)))
	  {
		  GPIOC->ODR = (1 << 13);
		  GPIOA->ODR = (1 << PIN_NUMBER);
		  for(int i = 0; i < 100000; i++);
	  	  GPIOC->ODR &=~(1 << 13);
		  GPIOA->ODR &=~ (1 << PIN_NUMBER);
		  for(int i = 0; i < 100000; i++);
	  }
	  else
	  {
		  GPIOC->ODR &=~(1 << 13);
		  GPIOA->ODR &=~ (1 << PIN_NUMBER);
		  for(int i = 0; i < 100000; i++);
	  }
  }
}

