/*
 * dio.h
 *
 *  Created on: Mar 12, 2024
 *      Author: Maydoum
 */

#ifndef INC_DIO_H_
#define INC_DIO_H_
#include "Std_Types.h"
#include "bit_math.h"


#define MAX_PIN_PER_PORT 16;
typedef uint16 Dio_PortLevelType;

typedef enum
{
    ChannelPA0 = 0,
    ChannelPA1,
    ChannelPA2,
    ChannelPA3,
    ChannelPA4,
    ChannelPA5,
    ChannelPA6,
    ChannelPA7,
    ChannelPA8,
    ChannelPA9,
    ChannelPA10,
    ChannelPA11,
    ChannelPA12,
    ChannelPA13,
    ChannelPA14,
    ChannelPA15,

    ChannelPB0 = 16,
    ChannelPB1,
    ChannelPB2,
    ChannelPB3,
    ChannelPB4,
    ChannelPB5,
    ChannelPB6,
    ChannelPB7,
    ChannelPB8,
    ChannelPB9,
    ChannelPB10,
    ChannelPB11,
    ChannelPB12,
    ChannelPB13,
    ChannelPB14,
    ChannelPB15,

    ChannelPC0,
    ChannelPC1,
    ChannelPC2,
    ChannelPC3,
    ChannelPC4,
    ChannelPC5,
    ChannelPC6,
    ChannelPC7,
    ChannelPC8,
    ChannelPC9,
    ChannelPC10,
    ChannelPC11,
    ChannelPC12,
    ChannelPC13,
    ChannelPC14,
    ChannelPC15,

} Dio_ChannelType;


typedef enum
{
	PortA,
	PortB,
	PortC,
	NumberOfPorts = 3
}Dio_PortType;

typedef enum
{
	STD_LOW,
	STD_HIGH
}Dio_LevelType;

Dio_LevelType Dio_ReadChannel(
		Dio_ChannelType ChannelId
);

void Dio_WriteChannel(
		Dio_ChannelType ChannelId,
		Dio_LevelType Level
);

Dio_PortLevelType Dio_ReadPort (
Dio_PortType PortId
);

void Dio_WritePort (
Dio_PortType PortId,
Dio_PortLevelType Level
);

#endif /* INC_DIO_H_ */
