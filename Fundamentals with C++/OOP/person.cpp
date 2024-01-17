#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    std::string gender;
    int age;

public:
    // Default constructor
    Person() {}

    // Parametarized Constructor
    Person(std::string n, std::string g, int a) : name(n), gender(g), age(a) {}

    // Getter methods
    std::string getName() const {
        return name;
    }

    std::string getGender() const {
        return gender;
    }

    int getAge() const {
        return age;
    }

    // Setter methods
    void setName(const std::string& n) {
        name = n;
    }

    void setGender(const std::string& g) {
        gender = g;
    }

    void setAge(int a) {
        age = a;
    }

    // Display method
    void displayPersonInfo() const {
        std::cout << "Name: " << getName() << "\n";
        std::cout << "Gender: " << getGender() << "\n";
        std::cout << "Age: " << getAge() << "\n";
    }
};

class Student : public Person {
private:
    int studyLevel;
    int studentId;
    float GPA;
    std::string department;

public:
    // Parameterized Constructor
    Student(std::string n, std::string g, int a, int sl, int id, float gpa, std::string dp)
        : Person(n, g, a), studyLevel(sl), studentId(id), GPA(gpa), department(dp) {}

    // Getter methods for Student class
    int getStudyLevel() const {
        return studyLevel;
    }

    int getStudentId() const {
        return studentId;
    }

    float getGPA() const {
        return GPA;
    }

    std::string getDepartment() const {
        return department;
    }

    // Setter methods for Student class
    void setStudyLevel(int sl) {
        studyLevel = sl;
    }

    void setStudentId(int id) {
        studentId = id;
    }

    void setGPA(float gpa) {
        GPA = gpa;
    }

    void setDepartment(const std::string& dp) {
        department = dp;
    }

    // Additional method specific to Student class
    void displayStudentInfo() const {
        displayPersonInfo();
        std::cout << "Study Level: " << getStudyLevel() << "\n";
        std::cout << "Student ID: " << getStudentId() << "\n";
        std::cout << "GPA: " << getGPA() << "\n";
        std::cout << "Department: " << getDepartment() << "\n";
    }
};

class PostGraduatedStudent : public Student
{
    private:
        std::string research_interest;
    public:
        PostGraduatedStudent(std::string n, std::string g, int a, int sl, int id, float gpa, std::string dp, std::string ra):
        Student(n, g, a, sl, id, gpa, dp)
        {
            research_interest = ra;
        }
        void set_research_interest(std::string rarea)
        {
            research_interest = rarea;
        }

        std::string get_research_interest()
        {
            return research_interest;
        }

        void display()
        {
            displayStudentInfo();
            std::cout << "Research Interest : " << research_interest << std::endl;
        }
};

int main() {
    // Example usage
    Student student("John Doe", "Male", 20, 1, 12345, 3.8, "Computer Science");
    PostGraduatedStudent student2("John Doe", "Male", 20, 1, 12345, 3.8, "Mechatronics", "Robotics");

    // Using inherited methods from the Person class
    student.displayPersonInfo();
    
    std::cout << "###############################" << std::endl;

    // Using Student-specific methods
    student.displayStudentInfo();

    std::cout << "###############################" << std::endl;
    // Modifying values using setter methods
    student.setName("Jane Doe");
    student.setAge(21);
    student.setStudentId(54321);

    // Displaying updated information
    student.displayStudentInfo();
    std::cout << "###############################" << std::endl;

    // Displaying information about PostGraduatedStudent class
    student2.display();

    return 0;
}
