#include <iostream>
#include <fstream>
using namespace std;

class Database
{

private:
    string password;
    int age;

public:
    string name,passwd;
    int stnum,Age;

    void setPassword(string pass)
    {
        password = pass;
    }
    string getPassword()
    {
        return password;
    }

    void StudentLogin()
    {
        Database st1;
        cout << "Enter name: ";
        cin >> st1.name;
        cout << "Enter Student number: ";
        cin >> st1.stnum;
        cout << "Now set a password you will remember: ";
        cin >> passwd;
        st1.setPassword(passwd);
        //pass = st1.setPassword(passwd;)
        ofstream data("Database.txt");
        data << st1.name<< st1.stnum << st1.age << st1.password << st1.getPassword();
        data.close();
        cout << "Information saved!!"<<endl;
    }

};

int main()
{

    int response;
    string name;
    int stdnum,adminnum;
    string passwd;
    cout << "Hello and welcome to Brainsteady!" << endl;
    cout << "\nPick an option from the menu below: "<<endl;
    cout << "1.Login as Admin\n2.Login as Student\n3.Signup as Student\n4.Signup as Admin\n4.Exit"<<endl;
    cin >> response;
    //while (true)
    {
        switch (response)
        {
        case 1:
            {
            Database adm1;
            cout << "Enter name: ";
                cin >> name;
            cout << "Enter Admin number: ";
                cin >> adminnum;
            cout << "Enter Password: ";
                cin >> passwd;
            //cout << "Information Saved inside database!!"<<endl;

            break;
            }
        case 2:
            {
                Database st1;
                cout << "Enter name: ";
                    cin >> name;
                cout << "Enter Student number: ";
                    cin >> stdnum;
                cout << "Enter Password: ";
                    cin >> passwd;
            break;
            }
        case 3:
            {
                Database st1;
                st1.StudentLogin();
                break;
            }
        default:
            {
                cout << "Invalid option entered!!"<<endl;
            }
        }

    }
    return 0;
}
