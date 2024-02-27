#include <iostream>
using namespace std;

class Counter
{
    protected:
        unsigned int count; // Note : protected not private
    
    public:
        Counter() : count(0) //no-agruments constructor
        {}
        Counter(unsigned int c) : count(c) // 1 argument constructor
        {}
        int get_count() // return count
        {
            return count;
        }
        Counter operator ++() // incrementing count ++ prefix
        {
            return Counter(++count);
        }
};

class CountDown : public Counter // The public section is inherited
{
    public:
        Counter operator --() //decrement count prefix 
        {
            return Counter(--count); 
        }
};

int main()
{
    CountDown C1;
    cout << "C1 = " << C1.get_count() << endl;
    ++C1;
    ++C1;
    ++C1;
    --C1;
    cout << "C1 = " << C1.get_count() << endl;

    return 0;
}