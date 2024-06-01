#include "main.h"


int main(void)
{
	RCC->APB2ENR = (1 << 4);
	GPIOC->CRH = 0x00300000; // pin 13

  while (1)
  {
	  GPIOC->ODR = (1 << 13);
	  for(int i = 0; i < 100000; i++);
	  GPIOC->ODR &=~(1 << 13);
	  for(int i = 0; i < 100000; i++);
  }

}

