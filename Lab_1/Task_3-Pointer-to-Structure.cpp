#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout << "\nFull Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // here we creating structure using pointer
    Student *ptr = new Student;

    cout << "Enter First Name: ";
    cin >> ptr->firstName;

    cout << "Enter Last Name: ";
    cin >> ptr->lastName;

    cout << "Enter Roll Number: ";
    cin >> ptr->rollNumber;

    cout << "Enter Marks: ";
    cin >> ptr->marks;

    // here we call member funtion using pointer.
    ptr->displayStudentInfo();

    delete ptr;  // Free memory

    return 0;
}