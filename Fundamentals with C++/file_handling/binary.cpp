#include <iostream>
#include <fstream>
#include <cstring>

int main()
{
    char input[100];
    strcpy(input, "Learning C++ from Omar Abdo");

    std::fstream file("file.bin",std::ios::binary | std::ios::in | std::ios::out | std::ios::trunc);

    if(!file.is_open())
        std::cout << "Error, Please try again!" << std::endl;
    else
    {
        int length = strlen(input);
        for(int count = 0; count <= length; count++)
            file.put(input[count]);
        
        file.seekg(0);
        char ch;
        while (file.good())
        {
            file.get(ch);
            std::cout << ch;
        }
    }

    return 0;
}