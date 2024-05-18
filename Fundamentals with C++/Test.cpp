#include <iostream>

// int number = 5;
// double num = 10;

int main()
{
    char oper;
    float num1, num2;

    int x;
    
    bool flage = 0;

    // while (flage == 0)
    // {
    //     std::cin >> num1 >> oper >> num2; // 4 + 6
    //     switch (oper)
    //     {
    //     case '+':
    //         std::cout << num1 + num2 << std::endl;
    //         flage = 1;
    //         break;
    //     case '-':
    //         std::cout << num1 - num2 << std::endl;
    //         flage = 1;
    //         break;
    //     case '*':
    //         std::cout << num1 * num2 << std::endl;
    //         flage = 1;
    //         break;
    //     case '/':
    //         std::cout << num1 / num2 << std::endl;
    //         flage = 1;
    //         break;
    //     default:
    //         std::cout << "Invalid input please try again." << std::endl;
    //         break;
    //     }
    // }

    // int num = 0;
    // for(int i = 0; i < 10; i++)
    // {
    //     std::cin >> num;
    //     if(num % 2 == 0) 
    //     {
    //         std::cout << "Even number" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "Odd number" << std::endl;
    //     }
    // }

    int i = 0;
    while(i < 10)
    {
        std::cout << "number is: " << i << std::endl;
        i++;
    }

    std::cout << "======================================" << std::endl;

    do{
        std::cout << "numeber is: " << i << std::endl;
        i++;
    }while( i < 0 ); // 11

    std::cout << "======================================" << std::endl;

    std::cout << "numeber is: " << i << std::endl;

    return 0;
}