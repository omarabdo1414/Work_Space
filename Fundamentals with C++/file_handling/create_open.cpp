#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("file.txt", ios::in | ios::out);

    if(!file)
    {
        cout << "Error while opening the file" << endl;
    }
    else
    {
        // read and write
        cout << "File opened successfully" << endl;
        file.close();
    }

    return 0;
}