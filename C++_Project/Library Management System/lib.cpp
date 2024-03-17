#include "lib.h"

void Temp::addBook()
{
    std::cout << "\nEnter Book ID : ";
    std::cin.ignore(); // Clear input beffer
    std::getline(std::cin, id);
    std::cout << "\nEnter Book Name : ";
    std::getline(std::cin, name);
    std::cout << "\nEnter Auther Name : ";
    std::getline(std::cin, auther);

    file.open("Books_Data.txt", std::ios::out | std::ios::app);
    file << id << "\n"
         << name << "\n"
         << auther << "\n";
    file.close();
}

void Temp::showAll()
{
    file.open("Books_Data.txt", std::ios::in);
    std::cout << "\n\n";
    std::cout << "\t\tBook Id \t\t\t Book Name \t\t\t Auther's Name" << std::endl;
    while (std::getline(file, id) && std::getline(file, name) && std::getline(file, auther))
    {
        std::cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << auther << std::endl;
    }
    file.close();
}

void Temp::extract()
{
    showAll();
    std::cout << "\nEnter Book Id : " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, search);

    file.clear();  // Clear any error flags
    file.seekg(0); // Move file pointer to the beginning of the file

    file.open("Books_Data.txt", std::ios::in);
    std::cout << "\n\n";
    std::cout << "\t\tBook Id \t\t\t Book Name \t\t\t Auther's Name" << std::endl;

    while (std::getline(file, id) && std::getline(file, name) && std::getline(file, auther))
    {
        if (search == id)
        {
            std::cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << auther << std::endl;
            std::cout << "Book Extracted Succesfully...!" << std::endl;
            return;
        }
    }
    std::cout << "Book Not Found...!" << std::endl;
    file.close();
}