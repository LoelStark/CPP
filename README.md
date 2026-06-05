# BrainSteady Student Database System

## Overview

BrainSteady Student Database System is a simple C++ console application that demonstrates basic object-oriented programming concepts, file handling, and user authentication. The program allows users to sign up and log in as either a student or an administrator.

The project was developed as a learning exercise to explore:

* Classes and objects
* Encapsulation
* Access modifiers (private and public)
* File input/output operations
* User authentication concepts
* Menu-driven applications

---

## Features

### Student Functions

* Student registration (signup)
* Store student information in a text file
* Password creation

### Administrator Functions

* Administrator registration
* Store administrator details in a text file
* Password creation

### General Functions

* Menu-based navigation
* Basic database storage using text files
* Object-oriented design using a Database class

---

## Technologies Used

* C++
* File Streams (`fstream`)
* Standard Input/Output (`iostream`)

---

## Project Structure

```text
BrainSteady/
│
├── main.cpp
├── Database.txt
└── README.md
```

### Files

| File         | Description                          |
| ------------ | ------------------------------------ |
| main.cpp     | Contains the application source code |
| Database.txt | Stores user information              |
| README.md    | Project documentation                |

---

## How It Works

When the application starts, users are presented with the following menu:

```text
1. Login as Admin
2. Login as Student
3. Signup as Student
4. Signup as Admin
5. Exit
```

### Student Signup

The student provides:

* Name
* Student Number
* Password

The information is then saved to `Database.txt`.

### Admin Signup

The administrator provides:

* Full Name
* Admin Number
* Age
* Password

The information is saved to `Database.txt`.

### Login

The system requests:

* Name
* User Number
* Password

The entered information is compared against stored data to verify the user's identity.

---

## Object-Oriented Concepts Demonstrated

### Encapsulation

Sensitive data such as passwords are stored in private variables and accessed through getter and setter methods.

```cpp
private:
    string password;

public:
    void setPassword(string pass);
    string getPassword();
```

### Classes and Objects

The application uses a `Database` class to represent user records and operations.

```cpp
class Database
{
    ...
};
```

---

## Compilation

Using g++:

```bash
g++ main.cpp -o BrainSteady
```

Run the application:

```bash
./BrainSteady
```

On Windows:

```bash
BrainSteady.exe
```

---

## Current Limitations

This project is intended for educational purposes and contains several limitations:

* Login verification is not fully implemented.
* User records overwrite previous records because the file is opened without append mode.
* Passwords are stored as plain text.
* Input validation is minimal.
* Student and admin data are stored in the same file.
* Information is not properly loaded back from the database during login.

---

## Future Improvements

* Implement complete login authentication.
* Store multiple users using append mode.
* Separate student and administrator records.
* Encrypt passwords before storage.
* Add input validation and error handling.
* Implement search and update functionality.
* Create a graphical user interface (GUI).
* Migrate from text files to a database system such as SQLite or MySQL.

---

## Learning Outcomes

This project helped demonstrate:

* C++ classes and objects
* Encapsulation principles
* File handling
* Menu-driven program design
* User authentication basics
* Software development best practices

---

## Author

Developed as part of the BrainSteady learning project to practice C++ programming and database management fundamentals.
