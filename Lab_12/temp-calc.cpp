#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Calculator
{
private:
    T a, b;

public:
    // Constructor
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T subtract()
    {
        return a - b;
    }

    T multiply()
    {
        return a * b;
    }
};

int main()
{
    // Integer test
    Calculator<int> c1(10, 5);

    cout << "Int Add: " << c1.add() << endl;
    cout << "Int Subtract: " << c1.subtract() << endl;
    cout << "Int Multiply: " << c1.multiply() << endl;

    cout << endl;

    // Double test
    Calculator<double> c2(5.5, 2.5);

    cout << "Double Add: " << c2.add() << endl;
    cout << "Double Subtract: " << c2.subtract() << endl;
    cout << "Double Multiply: " << c2.multiply() << endl;

    return 0;
}