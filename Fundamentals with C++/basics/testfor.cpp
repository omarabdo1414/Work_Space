#include <iostream>

int main()
{
    
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            if(i == j)
            {
                std::cout << "*";
            }
            if(j == (11 - i))
            {
                std::cout << "*";
            }
            if(i == j)
            {
                continue;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}