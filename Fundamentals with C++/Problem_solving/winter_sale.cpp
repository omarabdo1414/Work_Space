#include <iostream>
 
int main()
{
    float p,x, price;
    
    std::cin >> x >> p;
    
    price = p / (1 - (x/100));
    
    std::cout << price << std::endl;
    
    return 0;
}