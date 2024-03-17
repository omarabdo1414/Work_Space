#include <iostream>
#include <string>
#include <ostream>

using namespace std;

class Complex
{
    private:
    float real;
    float imaginary;
    
public:
    Complex(float m_real = 0, float m_imaginary = 0) : real(m_real), imaginary(m_imaginary)
    {
    }

    Complex operator+(Complex &rhs)
    {
        Complex temp;
        temp.real = real + rhs.real;
        temp.imaginary = imaginary + rhs.imaginary;

        return temp;
    }

    friend std::ostream& operator<<(std::ostream &output,Complex &input);

    void setReal(float rl)
    {
        this->real = rl;
    }

    float getReal()
    {
        return this->real;
    }
    void setImg(float img)
    {
        this->imaginary = img;
    }

    float getImg()
    {
        return this->imaginary;
    }
};

std::ostream& operator<<(std::ostream &output,Complex &input)
{
    output << input.real << " " << input.imaginary;

    return output;
}

std::string name;

int main()
{
    Complex c1(5, 6);
    Complex c2(6, 77);
    Complex c3(0, 0);

    c3 = c1 + c2;

    std::cout << c3 << std::endl;

    return 0;
}