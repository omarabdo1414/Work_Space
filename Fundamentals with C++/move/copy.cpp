// C++ code without using move semantics
#include<iostream>
#include<vector>

class IntegerList
{
    public: //access specifier for constructors and destructor

    //parameterize constructor
    IntegerList(const size_t _size=1):data(new int[_size]),size(_size)
    {
        std::cout<<"Constructor called\n";
    }
    //copy constructor using copy semantics and l-value reference
    IntegerList(const IntegerList &obj):data(new int[obj.size]),size(obj.size)
    {
        std::cout<<"Copy Constructor called\n";
        for(int i =0;i<obj.size;i++)
        {
            data[i]=obj.data[i];
        }
    }
    //destructor to deallocate the memory and handling dangling pointer issue
    ~IntegerList()
    {
        std::cout<<"Destructor called\n";
        if(data!=nullptr)
        {
            delete[] data;
            data=nullptr;
        }
    }
    //private attributes to store the data of the integers list and the size of the list
    private:
    int *data;
    size_t size;
};

int main() 
{
  std::vector<IntegerList> v;
  v.push_back(IntegerList(25));

  return 0;
}