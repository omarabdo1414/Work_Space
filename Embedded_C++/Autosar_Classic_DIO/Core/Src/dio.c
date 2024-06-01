/*
 * dio.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Omar Abdo
 */


#include "dio.h"
#include "main.h"

#define SET_BIT(reg, bit) reg |= (1 << bit)
#define CLEAR_BIT(reg, bit) reg ~=& (1 << bit)
#define TOGGLE_BIT(reg, bit) reg ^= (1 << bit)
#define GET_BIT(reg, bit) ((reg >> bit) & 1)


Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
	Dio_LevelType PortId = ChannelId / MAX_PIN_PER_PORT;
	Dio_ChannelType Id = ChannelId % MAX_PIN_PER_PORT;
	Dio_LevelType channel_level = STD_LOW;
	switch(PortId)
	{
	case PortA:
		channel_level = GET_BIT(GPIOA->IDR, Id);
		break;
	case PortB:
		channel_level = GET_BIT(GPIOB->IDR, Id);
		break;
	case PortC:
		channel_level = GET_BIT(GPIOC->IDR, Id);
		break;
	default:
		break;
	}
	return channel_level;
}

void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level)
{

	Dio_LevelType PortId = ChannelId / MAX_PIN_PER_PORT;
	Dio_ChannelType Id = ChannelId % MAX_PIN_PER_PORT;
	switch(PortId)
	{
	case PortA:
		SET_BIT(GPIOA->IDR, Id);
		break;
	case PortB:
		SET_BIT(GPIOB->IDR, Id);
		break;
	case PortC:
		SET_BIT(GPIOC->IDR, Id);
		break;
	default:
		break;
	}
}

Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
	Dio_PortLevelType Level = 0x0000;
	switch(PortId)
	{
	case PortA:
		Level = GPIOA->IDR;
		break;
	case PortB:
		Level = GPIOB->IDR;
		break;
	case PortC:
		Level = GPIOC->IDR;
		break;
	default:
		break;
	}
	return Level;
}

void Dio_WritePort (Dio_PortType PortId, Dio_PortLevelType Level)
{
	switch(PortId)
	{
	case PortA:
		GPIOA->ODR = Level;
		break;
	case PortB:
		GPIOB->ODR = Level;
		break;
	case PortC:
		GPIOC->ODR = Level;
		break;
	default:
		break;
	}
}
