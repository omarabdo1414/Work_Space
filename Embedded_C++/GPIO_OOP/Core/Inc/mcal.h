/*
 * mcal.h
 *
 *  Created on: Jun 3, 2024
 *      Author: Maydoum
 */

#ifndef INC_MCAL_H_
#define INC_MCAL_H_

#include "main.h"

constexpr uint8_t RCC_IOPA  							= 2  ; // PORT A
constexpr uint8_t RCC_IOPB  							= 3  ; // PORT B
constexpr uint8_t RCC_IOPC  							= 4  ; // PORT C
constexpr uint8_t LED_PIN_NUMBER_PA1    			    = 1  ; // LED 1 of RGB
constexpr uint8_t LED_PIN_NUMBER_PA2    			    = 2  ; // LED 1 of RGB
constexpr uint8_t LED_PIN_NUMBER_PA3    			    = 3  ; // LED 1 of RGB
constexpr uint8_t LED_PIN_NUMBER_C13   			    	= 13 ; // LED 1 of RGB
constexpr uint8_t BUTTON_PIN_NUMBER 					= 4  ; // push Button number 2
constexpr uint8_t OUTPUT_MAX_SPEED_AND_CONFIGURATION    = 0x3;// 50 MHZ
constexpr uint8_t SHIFTED_TIMES 						= 4  ;
constexpr uint8_t BUTTON_CONFIGURATION_AND_MODE			= 0x4;
constexpr uint8_t BUTTON_PIN_NUMBER_BB4 				= 4  ;

enum Status
{
	pressed,
	notPressed,
};


#endif /* INC_MCAL_H_ */
