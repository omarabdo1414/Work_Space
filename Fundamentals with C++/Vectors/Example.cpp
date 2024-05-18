#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        if (i == v.size() -1)
        {
            cout << "You reached the limit" << endl;
            cout << "If you want to add more press i key, and if you want to get out of the loop press any key : ";
            char press;
            cin >> press;
            if (press == 'i')
            {
                cout << "Please Enter the number of elements you want to add : ";
                int n;
                cin >> n;
                v.resize(v.size() + n);
            }
            else
            {
                break;
            }
        }
    }
    
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}