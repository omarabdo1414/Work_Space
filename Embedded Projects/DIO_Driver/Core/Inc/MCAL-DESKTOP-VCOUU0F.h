/*
 * MCAL.h
 *
 *  Created on: May 20, 2024
 *      Author: Omar AbdElAleem
 */

#ifndef INC_MCAL_H_
#define INC_MCAL_H_

#include "STD_TYPES.h"

constexpr int PINS_IN_REG = 8;
constexpr int PITS_COUNT = 4;
constexpr int SHIFT_STEPs = 1;

constexpr unsigned int RCC_GPIOA_EN 					= (1 << 2);
constexpr unsigned int RCC_GPIOB_EN 					= (1 << 3);
constexpr unsigned int RCC_GPIOC_EN 					= (1 << 4);
constexpr unsigned int INPUT_FLOATING 					= 0X4;
constexpr unsigned int PIN_B4 							= PITS_COUNT * 4;
constexpr unsigned int OUTPUT_MAX_SPEED_50 				= 0X3;
constexpr unsigned int PIN_C13 							= PITS_COUNT * (13-PINS_IN_REG);
constexpr unsigned int PIN_B9  							= PITS_COUNT * (9-PINS_IN_REG);
constexpr unsigned int PIN_A1  							= PITS_COUNT * 1;
constexpr unsigned int PIN_A2  							= PITS_COUNT * 2;
constexpr unsigned int PIN_A3  							= PITS_COUNT * 3;
constexpr unsigned int PUSH_BUTTON_PIN 					= 4;
constexpr unsigned int BUZZER_PIN  						= 9;
constexpr unsigned int LED_PIN_3  						= 13;
constexpr unsigned int RGB_PIN_1 						= 1;
constexpr unsigned int RGB_PIN_2 						= 2;
constexpr unsigned int RGB_PIN_3 						= 3;

constexpr u8 RCC_IOPA  							        = 2  ; // PORT A
constexpr u8 RCC_IOPB  							        = 3  ; // PORT B
constexpr u8 RCC_IOPC  							        = 4  ; // PORT C
constexpr u8 LED_PIN_NUMBER_PA1    			            = 1  ; // LED 1 of RGB
constexpr u8 LED_PIN_NUMBER_PA2    			            = 2  ; // LED 1 of RGB
constexpr u8 LED_PIN_NUMBER_PA3    			            = 3  ; // LED 1 of RGB
constexpr u8 LED_PIN_NUMBER_C13   			    	    = 13 ; // LED 1 of RGB
constexpr u8 BUTTON_PIN_NUMBER 					        = 4  ; // push Button number 2
constexpr u8 OUTPUT_MAX_SPEED_AND_CONFIGURATION         = 0x3;// 50 MHZ
constexpr u8 SHIFTED_TIMES 						        = 4  ;
constexpr u8 BUTTON_CONFIGURATION_AND_MODE			    = 0x4;
constexpr u8 BUTTON_PIN_NUMBER_BB4 				        = 4  ;

enum Status
{
	pressed,
	notPressed,
};


#endif /*INC_MCAL_H_*/