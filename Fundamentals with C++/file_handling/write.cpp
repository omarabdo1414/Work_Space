#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("file.txt");

    if(!file.is_open())
        std::cout << "Unable to write to the file \nPlease try again" << std::endl;
    else{
        file << "Hello, World" << std::endl;
        file << "I'm Omar Abdo, Software Engineer and Instructor" << std::endl;
        file << "Thank you for watching" << std::endl;

        file.close();

        std::cout << "Successflly written to the file" << std::endl;
    }
    return 0;
}