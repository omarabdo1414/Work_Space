#include <iostream>

// Template
// Generic Programming

template <typename T>
void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1, num2;
    float x, y;
    std::string f_name, s_name;

    std::cin >> x >> y >> num1 >> num2 >> f_name >> s_name;

    swap(x, y);
    swap(num1 , num2);
    swap(f_name, s_name);

    std::cout << x << " " << y << std::endl;
    std::cout << num1 << " " << num2 << std::endl;
    std::cout << f_name << " " << s_name << std::endl;
    
    return 0;
}