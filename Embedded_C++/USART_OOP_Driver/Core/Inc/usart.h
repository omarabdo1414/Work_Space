/*
 * usart.h
 *
 *  Created on: Mar 25, 2024
 *      Author: Maydoum
 */
#include "main.h"

#ifndef INC_USART_H_
#define INC_USART_H_

#define USART1_Base_ 0x40013800
#define USART2_Base_ 0x40004400
#define USART3_Base_ 0x40004800

#define FOSC 8000000
#define BAUD 9600

enum USART
{
	USART1_Instance = USART1_Base_,
	USART2_Instance = USART2_Base_,
	USART3_Instance = USART3_Base_
};

enum FrameSize
{
	FrameSizeEight = 0,
	FrameSizeNine
};

class Usart
{
public:
	Usart(USART usart) // inject USART
	{
		switch(usart)
		{
		case USART1_Instance:
			//Initializing USART1
			InitializeUSART1();
			break;
		case USART2_Instance:
			//Initializing USART2
			break;
		case USART3_Instance:
			//Initializing USART3
			break;
		}
		//Enable Clock gating for USART
		//AFIO and GPIO
		//set baud rate
		//set transmission and reception
		//Polling or Interrupt
		//Frame Size = 8;
		// Enable USART Module
	}
	void InitializeUSART1()
	{
		RCC->APB2ENR = (1 << 0) | (1 << 2) | (1 << 14);
		//PA9 to be output alternate function for USART Transmit
		GPIOA->CRH = (0x0B << 4); //  10 for alternate function 11 for mode so it is 1011 --> 0x0B in hex
		//PA10 to be input floating for USART receive
		GPIOA->CRH = (4 << 8);
		//Calculating the baud rate
		double USART_div = FOSC / BAUD;
		BRR = USART_div;
		//Enable Transmission and reception
		CR1  = (1 << 2) | (1 << 3);
		CR1 |= (1 << 13); // UE
	}
	void setFrameSize(FrameSize fsz)
	{
		CR1 = static_cast<uint32_t>(fsz);
	}
	void* operator new(size_t, USART instance)
	{
		return reinterpret_cast<void*>(instance);
	}

	void sendChar(char data)
	{
		DR = data & 0xFF;
		while(!(SR & (1 << 7)));
	}

	char read()
	{
		while(!(SR & (1 << 5)));
		return DR;
	}

	void sendString(char *data)
	{
		int i = 0;
		while(data[i] != '\0')
		{
			sendChar(data[i]);
			i++;
		}
	}
private:
	// Registers
	volatile uint32_t SR;
	volatile uint32_t DR;
	volatile uint32_t BRR;
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t CR3;
	volatile uint32_t GTPR;
};


#endif /* INC_USART_H_ */
