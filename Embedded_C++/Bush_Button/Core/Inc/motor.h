/*
 * motor.h
 *
 *  Created on: Mar 6, 2024
 *      Author: Maydoum
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_

#include "main.h"


struct Motor_Config
{
	GPIO_TypeDef * motor_In1_port;
	GPIO_TypeDef * motor_In2_port;
	GPIO_TypeDef * motor_En_port;

	uint8_t  motorIn1Pin;
	uint8_t  motorIn2Pin;
	uint8_t  motorEnPin;
};

class Motor
{
private:
	const Motor_Config motor_config;
public:
	Motor(const Motor_Config &motor_cnfg);

	void motorMoveCW();
	void motorMoveCCW();
	void MotorStop();
};


#endif /* INC_MOTOR_H_ */
