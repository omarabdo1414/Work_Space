/*
* motor.cpp
*
*  Created on: Mar 6, 2024
*      Author: Maydoum
*/

extern "C"
{
	#include "main.h"
}

#include "motor.h"
#include "mcal.h"


Motor::Motor(const Motor_Config &motor_cnfg) : motor_config(motor_cnfg)
{
	motor_config.motor_In1_port->CRL = (OUTPUT_MAX_SPEED_50 << motor_config.motorIn1Pin);
	motor_config.motor_In2_port->CRL = (OUTPUT_MAX_SPEED_50 << motor_config.motorIn2Pin);
	motor_config.motor_En_port->CRL = (OUTPUT_MAX_SPEED_50 << motor_config.motorEnPin);
}

void Motor::motorMoveCW()
{
	motor_config.motor_In1_port->ODR |= (1 << motor_config.motorIn1Pin);
	motor_config.motor_In2_port->ODR &=~ (1 << motor_config.motorIn2Pin);
	motor_config.motor_En_port->ODR  |= (1 << motor_config.motorEnPin);
	MotorStop();
}
void Motor::motorMoveCCW()
{
	motor_config.motor_In1_port->ODR &=~ (1 << motor_config.motorIn1Pin);
	motor_config.motor_In2_port->ODR |= (1 << motor_config.motorIn2Pin);
	motor_config.motor_En_port->ODR  |= (1 << motor_config.motorEnPin);
	MotorStop();
}

void Motor::MotorStop()
{
	motor_config.motor_In1_port->ODR &=~ (1 << motor_config.motorIn1Pin);
	motor_config.motor_In2_port->ODR &=~ (1 << motor_config.motorIn2Pin);
	motor_config.motor_En_port->ODR  &=~ (1 << motor_config.motorEnPin);
}

