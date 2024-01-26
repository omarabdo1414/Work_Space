#include <iostream>
#include <fstream>

int main()
{
    // std::ifstream file("file.txt", std::ios::in);

    // if(!file.is_open())
    // {
    //     std::cout << "Error" << std::endl;
    // }
    // else
    // {
    //     std::cout << file.tellg() << std::endl;
    //     std::string line;
    
    //     file.seekg(5);
    //     getline(file, line);

    //     std::cout << line << std::endl;
    // }

    std::ofstream file("file.txt", std::ios::out);

    if(!file.is_open())
    {
        std::cout << "Error" << std::endl;
    }
    else
    {
        std::cout << file.tellp() << std::endl;
        file << "Omar Abdo here" << std::endl;
        std::cout << file.tellp() << std::endl;
        file.seekp(5);
        file << "and i'm working at Robotics Corner" << std::endl;
        std::cout << file.tellp() << std::endl;

    }
    return 0;
}