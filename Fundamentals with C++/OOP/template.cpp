#include <iostream>
template <typename T, int N>
class myArray
{
    private:
        T arr[N];
    public:
    int getSize()
    {
        return N;
    }
};

int main()
{
    myArray<std::string, 50> arr;
    int num1 = 5, num2 = 6;
    int sum = num1 + num2;

    std::cout << arr.getSize() << std::endl;
    std::cout << "Hello World " << sum << std::endl;
}