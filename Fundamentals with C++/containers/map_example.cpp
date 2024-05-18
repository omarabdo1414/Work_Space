#include <iostream>
#include <map>

int main()
{
    std::map<std::string, float> gradeByName;

    gradeByName.insert({"Omar", 82.42});
    gradeByName.insert({"Hossam", 90.42});
    gradeByName.insert({"Ahmed", 85});
    gradeByName.insert({"Mohammed", 92});
    gradeByName.insert({"Eslam", 100});

    std::string name;

    std::cin >> name;
    int count = 0;

    for(auto it = gradeByName.begin(); it != gradeByName.end(); ++it)
    {
        // Condition for Search
        if(it->first == name)
        {
            std::cout << "Your Grade is: " << it->second << std::endl;
            count++;
            break;
        }
    }

    if(count == 0)
    {
        std::cout << "This Name Can not be found in our system!" << std::endl;
    }


    return 0;
}