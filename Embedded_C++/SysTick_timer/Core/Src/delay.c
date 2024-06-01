/*
 * delay.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Maydoum
 */
#include "main.h"
#include "delay.h"

#define OSC 8000000 //8MH
#define MILLIS_IN_SEC 1000

static volatile uint32_t Ticks;



void SystickInitialize()
{
	//Update system Clock value
	SysTick->LOAD = (OSC / MILLIS_IN_SEC) - 1;

	// Configure the SysTick timer to overflow every 1 us
	// SysTick->CTRL = (1 << 0) | (1 << 1) | (1 << 2);
	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;
}

void DelayInit()
{
	SystickInitialize();
}

void DelayMs(uint32_t ms)
{
	Ticks = ms;
	while(Ticks);
}

