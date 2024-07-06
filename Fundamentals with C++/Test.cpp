#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)
        cout << i << ' ';
    cout << '\n';
    for (int n : {0, 1, 2, 3, 4, 5})
        cout << n << ' ';
    cout << '\n';
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a)
        cout << n << ' ';
    cout << '\n';
    for (int n : a)
        cout << "In loop" << ' ' cout << '\n';
    string str = "Geeks";
    for (char c : str)
        cout << c << ' ';
    cout << '\n';
    cout << '{' << i.first << ", " << i.second << "}\n";
}