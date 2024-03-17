#include <iostream>

class Person
{
    private:
    std::string name;
    std::string gender;
    float age;

    public:
    //Default
    Person() : name("unknown"), gender("nothing"), age(-1)
    {
        std::cout << "Hello" << std::endl;
    }
    //Parameterized
    Person(std::string n, std::string g, float a) : name(n), gender(g), age(a)
    {}

    void setName(std::string n)
    {
        name = n;
    }

    std::string getName() const
    {
        return name;
    }
    
    virtual void display()
    {
        std::cout << name << " " << gender << " " << age << std::endl;
    }
};

class Student : public Person
{
    private:
    int student_level;
    float GPA;
    public:
    Student(std::string n, std::string g, float a, int sl, float gpa) : Person(n, g, a), student_level(sl), GPA(gpa)
    {}

    void set_GPA(float gpa)
    {
        GPA = gpa;
    }

    void display()
    {
        Person::display();
        std::cout << student_level << " "  << GPA << std::endl;
    }
};

//Multilevel Inheritance
class PostGraduatedStudent : public Student
{
    private:
        std::string research_inerest;
    public:
    PostGraduatedStudent(std::string n, std::string g, float a, int sl, float gpa, std::string ri) : Student(n, g, a, sl, gpa)
    {
        research_inerest = ri;
    }

    void set_research_inerest(std::string res_int)
    {
        research_inerest = res_int;
    }
    
    std::string get_research_inerest() const
    {
        return research_inerest;
    }

    void display()
    {
        Student::display();
        std::cout << research_inerest << std::endl;
    }    
};

int main()
{
    Person P("Mohammed", "Male", 23);
    Student S("Omar", "Male", 23, 4, 3.2);
    PostGraduatedStudent PG("mazen", "Male", 23, 3, 3.5, "Robotics");

    P.display();
    S.display();
    PG.display();
    return 0;
}