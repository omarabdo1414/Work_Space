/*
 * robot.cpp
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#include "mcal.h"
#include "robot.h"

Robot::Robot(Motor m1, Motor m2) : motor1(m1), motor2(m2)
{
	motor1.MotorStop();
	motor2.MotorStop();
}

void Robot::Forward()
{
	motor1.motorMoveCW();
	motor2.motorMoveCCW();
}

void Robot::Backword()
{
	motor1.motorMoveCCW();
	motor2.motorMoveCW();
}

void Robot::Right()
{
	motor1.motorMoveCW();
	motor2.MotorStop();
}

void Robot::Left()
{
	motor1.MotorStop();
	motor2.motorMoveCW();
}