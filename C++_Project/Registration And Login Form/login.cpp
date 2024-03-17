#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Temp
{
    private:
        std::string userName, email, password;
        std::string searchName, searchPass, searchEmail;
        std::fstream file;

    public:
        void login();
        void signUp();
        void forget();
}obj;

int main()
{
    char choice;

    std::cout << "\n1- Login";
    std::cout << "\n2- Sign-Up";
    std::cout << "\n3- Forget Password or user name";
    std::cout << "\n4- Exit";
    std::cout << "\nEnter Your choice: ";

    std::cin >> choice;

    switch (choice)
    {
    case '1':
        obj.login();
        break;
    case '2':
        obj.signUp();
        break;
    case '3':
        obj.forget();
        break;
    case '4':
        return 0;
        break;
    
    default:
            std::cout << "Invalid Choice....!" << std::endl;
        break;
    }
    return 0;
}

void Temp::signUp(){
    std::cout << "\nEnter User Name : ";
    cin.ignore(); // Clear input buffer
    getline(std::cin, userName);
    std::cout << "\nEnter Email : ";
    getline(std::cin, email);
    std::cout << "\nEnter Password : ";
    getline(std::cin, password);

    file.open("Login_data.txt", std::ios::out | std::ios::app);
    file << userName << "\n" << email << "\n" << password << "\n===========================" << std::endl;
    file.close();
}

void Temp::login()
{
    
    std::cout << "------------------LOGIN------------------" << std::endl;
    std::cout << "Enter Your User Name : ";
    cin.ignore(); // Clear input buffer
    getline(std::cin, searchName);
    std::cout << "Enter Your Password : ";
    getline(std::cin, searchPass);

    file.open("Login_data.txt", std::ios::in);
    
    while (getline(file, userName) && getline(file, email) && getline(file, password))
    {
        if(userName == searchName && password == searchPass) {
            std::cout << "\nAccount Login Succesfully...!" << std::endl;
            std::cout << "User Name : " << userName << std::endl;
            std::cout << "User Email : " << email << std::endl;
            file.close();
            return;
        }
    }
    std::cout << "Invalid user name or password : ";
    file.close();
}

void Temp::forget()
{
    std::cout << "\nEnter your email: ";
    cin.ignore(); // Clear input buffer
    getline(std::cin, searchEmail);

    file.open("Login_data.txt", std::ios::in);
    
    while (getline(file, userName) && getline(file, email) && getline(file, password))
    {
        if(email == searchEmail)
        {
            std::cout << "Account Found..!" << std::endl;
            std::cout << "Your user name is : " << userName << std::endl;
            std::cout << "Your password is : " << password << std::endl;
            file.close();
            return;
        }
    }
    std::cout << "Account Not found..!" << std::endl;
    file.close();
}
