#include <iostream>

template<typename A, typename B>
class Pair
{
    private:
        A first;
        B second;
    
    public:
        //paramitarized default Constructor
        Pair(A f, B s) : first(f) , second(s)
        {}

        void display()
        {
            std::cout << "Pair: | " << first << " - " << second << " |" << std::endl;
        }
};

int main()
{
    Pair<int, std::string> p(1, "Tasneem");
    Pair<int, int> p2(2, 3);
    Pair<float, double> p3(2.3, 5.2);

    p.display();
    p2.display();
    p3.display();

    return 0;
}