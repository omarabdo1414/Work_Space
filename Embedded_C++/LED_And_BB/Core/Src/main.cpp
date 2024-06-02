extern "C"
{
	#include "main.h"
}

#define PIN_NUMBER 2

enum Status
{
	pressed = 0,
	notPressed = 1,
};

void vGPIOInit(void);

int main(void)
{
	vGPIOInit();
	GPIOA->CRL = (0X3 << 4 * PIN_NUMBER);// 0x00000030


  while (1)
  {
	  Status buttonState = static_cast<Status>((GPIOB->IDR & (1 << 4)) ? 1 : 0);
	  if(buttonState == pressed)
	  {
		  GPIOC->ODR = (1 << 13);
		  GPIOA->ODR = (1 << PIN_NUMBER);
		  for(int i = 0; i < 100000; i++);
		  GPIOC->ODR &=~(1 << 13);
		  GPIOA->ODR &=~(1 << PIN_NUMBER);
		  for(int i = 0; i < 100000; i++);
	  }
	  else
	  {
		  GPIOC->ODR &=~(1 << 13);
		  GPIOA->ODR &=~(1 << PIN_NUMBER);
		  for(int i = 0; i < 100000; i++);
	  }
  }
  /* USER CODE END 3 */
}


// GPIO Initialization Function
void vGPIOInit(void)
{
    // Enable clock for GPIOB, GPIOC and GPIOA
    RCC->APB2ENR = (1 << 3) | (1 << 4) | (1 << 2);

    // Configure PC13 as output Max Speed
//    GPIOC->CRH &= ~(0xF << (4 * 5));   // Clear current settings
    GPIOC->CRH = (0x3 << (4 * 5));    // Set PC13 as General purpose output push-pull, max speed 2 MHz

    // Configure PB4 as input floating
//    GPIOB->CRL &= ~(0xF << (4 * 4));   // Clear current settings
    GPIOB->CRL = (0x4 << (4 * 4));    // Set PB4 as input floating

}
