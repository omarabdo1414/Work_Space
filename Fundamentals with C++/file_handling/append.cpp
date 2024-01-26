#include <iostream>
#include <fstream>

// using namespace std;

int main()
{
    std::fstream file("file.txt", std::ios::in | std::ios::out | std::ios::app);

    if(!file.is_open())
        std::cout << "Error, Please try again" << std::endl;
    else
    {
        std::cout << "File opend Successgully ... " << std::endl;
        std::cout << "Append to the file ... " << std::endl;

        file << "This is Omar Abdo" << std::endl;

        file.seekg(0);
        std::string read;

        while(getline(file, read))
        {
            std::cout << read << std::endl;
        }
    }
    return 0;
}