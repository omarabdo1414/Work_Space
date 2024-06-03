/*
 * robto.h
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#ifndef INC_ROBOT_H_
#define INC_ROBOT_H_

#include "motor.h"

class Robot
{
public:
	Robot(Motor m1, Motor m2);

	void Forward();
	void Backword();
	void Right();
	void Left();
private:
	Motor motor1;
	Motor motor2;
};


#endif /* INC_ROBOT_H_ */
