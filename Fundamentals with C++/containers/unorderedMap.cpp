#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> um { {"Kia", 2019}, {"Honda", 2020}, {"BMW", 2016} };

    cout << um["Kia"] << endl;

    um["Kia"] = 2020;
    um.insert("Kia", 2022); // not effective
    um.insert_or_assign("Kia", 2022);

    cout << um["Kia"] << endl;

    return 0;
}