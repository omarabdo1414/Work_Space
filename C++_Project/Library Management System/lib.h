#include <iostream>
#include <fstream>
#include <string>

class Temp
{
private:
    std::string id, name, auther, search;
    std::fstream file;

public:
    void addBook();
    void showAll();
    void extract();
};