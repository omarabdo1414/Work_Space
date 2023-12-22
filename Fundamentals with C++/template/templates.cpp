#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack<float> fs(5);

    float f = 1.1;
    cout << "Pushing elements onto fs" << endl;

    fs.push(f);
    fs.pop(f);
    cout << f << endl;

    while (fs.push(f))
    {
        cout << f << ' ';
        f += 1.1;
    }

    cout << endl
         << "Stack Full." << endl
         << endl
         << "Popping elements from fs" << endl;
    while (fs.pop(f))
        cout << f << ' ';
    cout << endl
         << "Stack Empty" << endl;
    cout << endl;

    Stack<int> is(3);
    int i = 1;
    cout << "Pushing elements onto is" << endl;
    while (is.push(i))
    {
        cout << i << ' ';
        i += 1;
    }
    cout << endl
         << "Stack Full" << endl
         << endl
         << "Popping elements from is" << endl;
    while (is.pop(i))
        cout << i << ' ';
    cout << endl
         << "Stack Empty" << endl;

    return 0;
}