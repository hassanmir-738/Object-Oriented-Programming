#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    // here we make Constructor
    Box(int l)
    {
        length = l;
    }

    // Friend function  declaration
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b)
{
    cout << "Length of Box: " << b.length << endl;
}

int main()
{
    Box b1(10);

    // Calling friend function
    displayLength(b1);

    return 0;
}