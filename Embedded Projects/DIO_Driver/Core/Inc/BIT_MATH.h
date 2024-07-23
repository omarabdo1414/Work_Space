/*
 * BIT_MATH.h
 *
 *  Created on: May 20, 2024
 *      Author: Omar AbdElAleem
 */

#ifndef INC_BIT_MATH_H_
#define INC_BIT_MATH_H_

#define SET_BIT_(reg, bit)         	reg |= (1 << bit)
#define CLR_BIT(reg, bit)       	reg ~=& (1 << bit)
#define TOG_BIT(reg, bit)      		reg ^= (1 << bit)
#define GET_BIT(reg, bit)         	((reg >> bit) & 1)

#endif /* INC_BIT_MATH_H_ */