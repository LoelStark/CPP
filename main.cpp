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

    void StudentSignup()
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
        data << st1.name<< st1.stnum << st1.age << st1.passwd /**<< st1.getPassword()**/ ;
        data.close();
        cout << "Information saved!!"<<endl;
    }
    void adminSignup()
    {
        Database adm1;
        cout << "Enter full name and surname: ";
        getline(cin,adm1.name);
        cout << "Enter Admin number: ";
        cin >> adm1.stnum;
        cout << "Enter age: ";
        cin >> adm1.Age;
        cout << "Now set your very own admin password: ";
        cin >> adm1.passwd;
        adm1.setPassword(passwd);
        ofstream data("Database.txt");
        data << adm1.name << adm1.stnum << adm1.Age <<adm1.passwd;
        //Comparing data from the entered text file
    }

};

int main()
{

    ifstream data("Database.txt");
    int response;
    string name;
    int stdnum,adminnum;
    string passwd;
    cout << "Hello and welcome to Brainsteady!" << endl;
    cout << "\nPick an option from the menu below: "<<endl;
    cout << "1.Login as Admin\n2.Login as Student\n3.Signup as Student\n4.Signup as Admin\n5.Exit"<<endl;
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
                //while(getline(cin,adm1.data,adm1.name));
                if (name == adm1.name && adminnum == adm1.stnum && passwd == adm1.getPassword())
                {
                    cout << "Informartion verified, you are now logged in!"<<endl;
                    break;
                }
                else
                {
                    cout << "Invalid information Entered, please re-enter the details and try again."<<endl;
                }

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
                st1.StudentSignup();
                break;
            }
        case 4:
            {
                Database adm1;
                cout << "You have chosen to Signup as admin...";
                adm1.adminSignup();
                break;
            }
        case 5:
            {
                cout << "Thank you for using the student database :)"<<endl;
                exit(1);
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
