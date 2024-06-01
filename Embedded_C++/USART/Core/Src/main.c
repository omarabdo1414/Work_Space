
#include "main.h"

#define FOSC 8000000
#define BAUD 9600

void USART_sendChar(char data)
{
	USART1->DR = data & 0xFF;
	while(!(USART1->SR & (1 << 7)));
}

void USART_sendString(char *data)
{
	int i = 0;
	while(data[i] != '\0')
	{
		USART_sendChar(data[i]);
		i++;
	}
}

void Led_Init()
{
	RCC->APB2ENR = (1 << 4);
	GPIOC->CRH = (3 << 20);
}

void LED_ON()
{
	GPIOC->ODR |= (1 << 13);
}

void LED_OFF()
{
	GPIOC->ODR &=~ (1 << 13);
}

int main(void)
{
	RCC->APB2ENR = (1 << 0) | (1 << 2) | (1 << 14);
	Led_Init();
	//PA9 to be output alternate function for USART Transmit
	GPIOA->CRH = (0x0B << 4); //  10 for alternate function 11 for mode so it is 1011 --> 0x0B in hex
	//PA10 to be input floating for USART receive
	GPIOA->CRH = (4 << 8);
	//Calculating the baud rate
	double USART_div = FOSC / BAUD;
	USART1->BRR = USART_div;
	//Enable Transmission and reception
	USART1->CR1 = (1 << 2) | (1 << 3);
	USART1->CR1 |= (1 << 13); // UE

  while (1)
  {
	  while(!(USART1->SR & (1 << 5)));
	  unsigned char control = USART1->DR & 0x00FF;
	  if(control == 'w')
	  {
		  LED_ON();
		  USART_sendString("LED is ON\r\n");
	  }
	  else
	  {
		  LED_OFF();
		  USART_sendString("LED is OFf\r\n");
	  }
  }
}
