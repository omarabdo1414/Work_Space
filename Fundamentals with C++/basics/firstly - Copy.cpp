#include <iostream>
using namespace std;

void writeName(std::string name)
{
    cout << "Hello, " << name << std::endl;
}

int main()
{
    std::string Name;
    cout << "Enter yout name : ";
    cin >> Name;
    writeName(Name);
    return 0;
}