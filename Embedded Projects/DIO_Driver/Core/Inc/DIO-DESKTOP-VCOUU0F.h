/*
 * DIO.h
 *
 *  Created on: May 20, 2024
 *      Author: Omar AbdElAleem
 */

#ifndef INC_DIO_H_
#define INC_DIO_H_

#include "STD_TYPES.h"

#define DIO_PIN_STATUS_LOW       0
#define DIO_PIN_STATUS_HIGH      1

#define DIO_PIN_INPUT            0
#define DIO_PIN_OUTPUT           1

#define DIO_POTRA       0
#define DIO_POTRB       1
#define DIO_POTRC       2
#define DIO_POTRD       3

#define DIO_PIN0        0
#define DIO_PIN1        0
#define DIO_PIN2        0
#define DIO_PIN3        0
#define DIO_PIN4        0
#define DIO_PIN5        0
#define DIO_PIN6        0
#define DIO_PIN7        0

enum PinValue
{
    DIO_PIN_LOW,
    DIO_PIN_HIGH
};

void DIO_voidSetPinStatus       (u32 Copy_u32PORT, u32 Copy_u32PIN, u32 Copy_u32DIRECTION);
void DIO_voidSetPinValue        (u32 Copy_u8PORT, u32 Copy_u8PIN, u32 Copy_u8VALUE    );
u32   DIO_u8GetPinVALUE         (u32 Copy_u8PORT, u32 Copy_u8PIN                     );

#endif /*INC_DIO_H_*/