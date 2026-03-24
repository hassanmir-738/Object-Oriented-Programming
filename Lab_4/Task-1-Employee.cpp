#include<iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    float salary;

    public:
    // here we use default constructor
    Employee(){
        id = 0;
        name = "Not Assigned";
        salary = 0.0;
    }
    // display detailss
    void displayDetails(){
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};

int main(){
    // creatingg object
    Employee e;
    cout<<"Employee Details: "<<endl;
    e.displayDetails();
    
    return 0;
}