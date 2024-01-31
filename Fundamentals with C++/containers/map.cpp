#include <iostream>
#include <map>
using namespace std;

int main()
{
    std::map <int, int> quize;
    quize[7] = 70;
    quize.insert(pair<int, int>(1, 10));
    quize.insert(pair<int, int>(2, 20));
    quize.insert(pair<int, int>(3, 30));

    auto it = quize.begin();
    it = quize.insert(it, {4, 40});
    it = quize.insert(it, {5, 50});
    it = quize.insert(it, {6, 60});
    quize[8] = 80;

    cout << "\tKey\tValue\t" << endl;
    for (auto it = quize.begin(); it != quize.end(); it++)
    {
        std::cout << "\t" << it->first << " -> "<< "\t" << it->second << std::endl;
    }

    cout << endl;

    map <int, int> quize_2(quize.begin(), quize.end());

    cout << "\tKey\tValue\t" << endl;
    for (auto it = quize_2.begin(); it != quize_2.end(); it++)
    {
        std::cout << "\t" << it->first << " : "<< "\t" << it->second << std::endl;
    }

    cout << "Removing quizes from 1 to 3 " << endl;
    cout << "\tKey\tValue\t" << endl;
    quize_2.erase(quize_2.begin(), quize_2.find(3));

    for (auto it = quize_2.begin(); it != quize_2.end(); it++)
    {
        cout << "\t" << it->first << " : "<< "\t" << it->second << std::endl;
    }

    cout << "erasing element 4 : " << endl;
    cout << "\tKey\tValue\t" << endl;
    int num;
    num = quize_2.erase(4);

    for (auto it = quize_2.begin(); it != quize_2.end(); it++)
    {
        cout << "\t" << it->first << " : "<< "\t" << it->second << std::endl;
    }

    cout << "Finding Upper and Lower bound : " << endl;
    cout << "Lower Bound : " << endl; 
    cout << "\tKEY : " << quize_2.lower_bound(5)->first << '\t';
    cout << "\tElement : " << quize_2.lower_bound(5)->second << endl;

    cout << "Upper Bound : " << endl; 
    cout << "\tKEY : " << quize_2.upper_bound(5)->first << '\t';
    cout << "\tElement : " << quize_2.upper_bound(5)->second << endl;

    auto itLow = quize_2.lower_bound(3);
    auto itUP = quize_2.upper_bound(8);

    quize_2.erase(itLow, itUP);

    for (auto it = quize_2.begin(); it != quize_2.end(); it++)
    {
        cout << "\t" << it->first << " : "<< "\t" << it->second << std::endl;
    }

    quize.clear();
    quize_2.clear();

    return 0;
}