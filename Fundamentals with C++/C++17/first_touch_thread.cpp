#include <iostream>
#include <thread>
#include <chrono>

/*
1. Continous
2. Periodic
3. Sparodic
*/

int temperature = 0;

using namespace std::literals::chrono_literals;
void generateTemperature()
{
    while(1)
    {
        temperature++;
        if(temperature > 100)
        {
            temperature = 0;
        }
        std::this_thread::sleep_for(1s);
    }
}

void LCD_Screen(std::string display_str)
{
    while (1)
    {
        std::cout << display_str << temperature << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    std::string data("Temperature: ");

    std::thread t1(LCD_Screen, data);
    std::thread t2(generateTemperature);
    t1.join();
    t2.join();
    

    return 0;
}