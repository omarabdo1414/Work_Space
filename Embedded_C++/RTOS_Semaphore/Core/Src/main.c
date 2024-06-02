
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

SemaphoreHandle_t mutex;

void TempSensorTask(void *pvParameter);
void WelcomeTask(void *pvParameter);

int main(void)
{
	mutex = xSemaphoreCreateMutex();

	if(mutex != NULL)
	{
		RCC->APB2ENR = (1 << 3); //Enable GPIOA
		GPIOA->CRL = (3<<4) | (3<<8); // configure PA1 = blue led as output pin
		xTaskCreate(WelcomeTask, "WelcomeTask", 300, NULL, 2, NULL);
		xTaskCreate(TempSensorTask, "TempSensorTask", 300, NULL, 2, NULL);
		vTaskStartScheduler();
	}

  while (1)
  {

  }
}

void WelcomeTask(void *pvParameter)
{
	while(1)
	{
		xSemaphoreTake(mutex , portMAX_DELAY);
		//print "Welcome" using OLED
		xSemaphoreGive(mutex);
	}
}

void TempSensorTask(void *pvParameter)
{
	while(1)
	{
		xSemaphoreTake(mutex , portMAX_DELAY);
		//display temperature using OLED
		xSemaphoreGive(mutex);
	}
}


