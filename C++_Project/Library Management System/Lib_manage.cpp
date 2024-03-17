#include <iostream>
#include "lib.h"

int main()
{
    Temp user;
    char choice;
    std::cout << "----------------------------------";
    std::cout << "\n1-Show All Books";
    std::cout << "\n2-Extract Book";
    std::cout << "\n3-Add Books(ADMIN)";
    std::cout << "\n4-Exit";
    std::cout << "\n----------------------------------";
    std::cout << "\nEnter Your Choice : ";
    std::cin >> choice;

    switch (choice)
    {
    case '1':
            user.showAll();
        break;
    case '2':
            user.extract();
        break;
    case '3':
            user.addBook();
        break;
    case '4':
            return 0;
        break;

    default:
        std::cout << "Invalid Option...!" << std::endl;
        break;
    }

    return 0;
}

