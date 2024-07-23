/*
 * DIO.cpp
 *
 *  Created on: May 20, 2024
 *      Author: Omar AbdElAleem
 */

#include "DIO_Driver/Core/Inc/STD_TYPES.h"
#include "DIO_Driver/Core/Inc/BIT_MATH.h"

#include "DIO_Driver/Core/Inc/DIO.h"
#include "DIO_Driver/Core/Inc/private.h"
#include "DIO_Driver/Core/Inc/Config.h"
#include "DIO_Driver/Core/Inc/MCAL.h"

void DIO_voidSetPinStatus       (u32 Copy_u32PORT, u32 Copy_u32PIN, u32 Copy_u32DIRECTION){
    if(Copy_u32DIRECTION == DIO_PIN_OUTPUT)
    {
    }
    
}
void DIO_voidSetPinValue        (u32 Copy_u32PORT, u32 Copy_u32PIN, u32 Copy_u32VALUE    ){
    if(Copy_u32VALUE == DIO_PIN_LOW)
    {}
}
u32   DIO_u8GetPinVALUE          (u32 Copy_u8PORT, u32 Copy_u8PIN                     ){

}