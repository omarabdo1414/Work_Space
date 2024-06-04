
#include "main.h"
#include "dio.h"
#include "Std_Types.h"
#include "bit_math.h"

#define PUSH_BUTTON_CHANNEL ChannelPB4
#define LED_CHANNEL 		ChannelPA2
#define LED_ON				0
#define LED_OFF				1

int main(void)
{
  RCC->APB2ENR = (1 << 2) | (1 << 3);

  GPIOA->CRL |= (0x3 << (4 * 2));
  GPIOB->CRL |= (0x4 << (4 * 4));

  while (1)
  {
	  Dio_LevelType button_state = Dio_ReadChannel(PUSH_BUTTON_CHANNEL);
	  if(button_state == STD_HIGH)
	  {
		  Dio_WriteChannel(LED_CHANNEL, LED_ON);

		  // Simple debounce delay
		  for (volatile uint32_t i = 0; i < 100000; i++);
	  }
	  else
	  {
		  Dio_WriteChannel(LED_CHANNEL, LED_OFF);
	  }
  }

}