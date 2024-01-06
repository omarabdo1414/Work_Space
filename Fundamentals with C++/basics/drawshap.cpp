#include <iostream>

int main()
{
    int len, wid;

    std::cin >> len >> wid;

    for(int i = 1; i <= len; i++)
    {
        for(int j = 1; j <= wid; j++)
        {
            if(i == 1 || i == len)
            {
                std::cout << "*";
            }
            else if(i > 1 && i < len)
            {
                if(j > 1 && j < wid)
                    std::cout << " ";
                else
                    std::cout << "*";
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