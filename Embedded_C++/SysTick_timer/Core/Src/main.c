
#include "main.h"
#include "delay.h"

unsigned int counter;

int main(void)
{
	RCC->APB2ENR = (1 << 4); //Enable GPIOC
	GPIOC->CRH = 0x33333333;
	DelayInit();

  while (1)
  {
	  GPIOC->ODR &=~ (1 << 13);
	  DelayMs(1000);
	  GPIOC->ODR |= (1 << 13);
	  DelayMs(1000);
  }
}
