#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ofstream Database("Database.txt");
class user
{
    public:
        string name;
        string email;
        int age;
    private:
        string password;

        /**
        int getpin()
        {
            return pin;
        }
        ***/

        void displayData()
        {
            cout << "Name: "<<name<<endl;
            cout << "Student Email: "<<email<<endl;
            cout<< "Age: "<<age<<endl;
        }
};
class student: public user
{
    public:
        string name;
        string student_email;
        int age;

        void displayInfo()
        {
            cout << "Name: "<<name<<endl;
            cout << "Student Email: "<<student_email<<endl;
            cout<< "Age: "<<age<<endl;
        }
};
class Admin: public user
{
    public:
        string name;
        string email;
        int age;

        void display_info()
        {
            cout << "Name: "<<name<<endl;
            cout << "Student Email: "<<email<<endl;
            cout<< "Age: "<<age<<endl;
        }

};

void Greeting()
{
    cout << "\t\tHello and welcome to Student connect!!"<<endl;
    cout << "Your one and only student colllab platform for VUT"<<endl;
        cout << "Pick an option from the menu that will be printed below:\n"<<endl;
}
void Menu()
{
    cout << "1. Create Admin Account\n2.Create Student Account\n3.Login\n4.Database\n5.Exit"<<endl;

}

void StudentAcc()
{

            cout << "You have chosen to create a Student Account...\n"<<endl;
            student st1;
              cout << "ENter Student name: ";
              cin >> st1.name;
              cout << "ENter Student Age: ";
              cin >> st1.age;
              cout << "ENter Student Email: ";
              cin >> st1.student_email;
            //st1.displayInfo();
            //ofstream Database("Database.txt");
            Database << st1.name << st1.age << st1.student_email<<endl;
            cout << "Account Created"<<endl;
}

void AccessDatabase()
{
    student st1;
    string name;
    string email;
    int age;
    cout << "This will access stored data from the student database"<<endl;
    ifstream Database("Database.txt");
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "ENter associated email address: ";
    cin >> email;
    while (getline(Database, st1.name))
    {
        if (name == st1.name && age == st1.age && email == st1.student_email)
        {
            cout << "Name found on the student database"<<endl;
            break;
        }
        else
        {
            cout << "name not found"<<endl;
            break;
        }
    }

}

/**
void Admin()
{
    Admin ad1;
    cout << "You have chosen to create an admin account..\n"<<endl;
    cout << "Enter admin name: ";
    cin >> ad1.name;
    cout << "ENter admin email: ";
    cin >> ad1.email;
    cout << "Enter admin age: ";
    cin >> ad1.age;
        ad1.display_info();
}
**/
int main()
{
    int response;
    Greeting();
    while (true)
    {
        Menu();
    cout <<"Response: ";
    cin >> response;
    switch(response)
    {
        case 1:
        {
            Admin();
            break;
        }

        case 2:
        {
            StudentAcc();
            break;
        }
        case 3:
        {
            string name, email;
            cout << "You have chosen to login: "<<endl;
            cout << "Enter Username: ";
            cin >> name;
            cout << "ENter email: ";
            cin >> email;

        }
        case 4:
        {
            cout << "You have chosen to access the stundet database...:"<<endl;
            AccessDatabase();
        }
/**
    case 5:
            cout << "Thank you for using the student collaboration platform..."<<endl;\
            exit(1);
            break;
        **/
        default:
            cout << "Invalid option selected!"<<endl;
            break;
            }
    }


}
