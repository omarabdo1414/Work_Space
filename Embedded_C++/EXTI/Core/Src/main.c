
#include "main.h"

void EXTI4_IRQHandler(void)
{
	if((EXTI->PR & (1 << 4)) != 0)
	{
		EXTI->PR = EXTI_PR_PR4;
		GPIOA->ODR ^= (1 << 1);
	}
}

int main(void)
{
	//enable clock for AFIO, PORTB and PORTA
	RCC->APB2ENR = (1 << 0) | (1 << 3) | (1 << 2);
	GPIOA->CRL = 0x33333333;
	GPIOB->CRL = 0x44444444;
	GPIOA->ODR = (1 << 1);

	//Mapping PIN B4
	AFIO->EXTICR[1] = (1 << 0); // 0x00000001

	EXTI->IMR = (1 << 4); // unmask interrupt
	EXTI->EMR = (1 << 4); // unmsak event
	EXTI->RTSR = (1 << 4); // set rising edge

	NVIC->ISER[0] = (1 << 10);

  while (1)
  {

  }
}
