#include<iostream>
using namespace std;

class Rectangle{
    private:
    float length;
    float width;

    public:
    // default constructor
    Rectangle(){
        length = 1.0;
        width = 1.0;
    }
    //parametrized
    Rectangle(float l, float w){
        length = l;
        width = w;
    }
    // single parameter const 
    Rectangle(float sq){
        length = sq;
        width = sq;
    }
    float area(){
        return length * width;
    }

    void display(){
        cout<<"Lenght: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Area: "<<area()<<endl;
    }
};
int main(){
    Rectangle r1; //default const
    Rectangle r2(5, 3); // parametrized const
    Rectangle r3(4); // single parameter const

    cout <<"\n Rectangle r1: "<<endl;
    r1.display();

    cout <<"\n Rectangle r2: "<<endl;
    r2.display();

    cout<<"\n Rectangle r3 square: "<<endl;
    r3.display();

    return 0;
}