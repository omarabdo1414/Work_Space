#include <iostream>

class Base
{
private:
    std::string member_name;
    int age;
    std::string member_address;
    std::string member_phoneNumber;
    int member_id;

public:
    void setName(const std::string &name)
    {
        member_name = name;
    }

    std::string getName() const
    {
        return member_name;
    }

    // Setter and getter for age
    void setAge(int studentAge)
    {
        age = studentAge;
    }

    int getAge() const
    {
        return age;
    }

    // Setter and getter for member_address
    void setAddress(const std::string &address)
    {
        member_address = address;
    }

    std::string getAddress() const
    {
        return member_address;
    }

    // Setter and getter for member_phoneNumber
    void setPhoneNumber(const std::string &phoneNumber)
    {
        member_phoneNumber = phoneNumber;
    }

    std::string getPhoneNumber() const
    {
        return member_phoneNumber;
    }

    // Setter and getter for member_id
    void setId(int id)
    {
        member_id = id;
    }

    int getId() const
    {
        return member_id;
    }
};