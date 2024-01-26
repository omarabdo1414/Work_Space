#include <iostream>
#include <fstream>

int main()
{
    std::ifstream file;
    file.open("file.txt");

    if(!file.is_open())
        std::cout << "Unable to read from the file \nPlease try again" << std::endl;
    else{
        std::string line;
        std::cout << "Reading from the file ... " << std::endl;
        std::cout << "The content is : ";
        while(file.good())
        {
            getline(file, line);
            std::cout << line << std::endl;
        }
    }

    return 0;
}