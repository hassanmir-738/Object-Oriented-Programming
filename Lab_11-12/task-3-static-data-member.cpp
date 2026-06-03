#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double balance;

public:
    // Static data member
    static int totalAccounts;

    // here we make constructor
    BankAccount(string name, double bal)
    {
        accountHolderName = name;
        balance = bal;
        totalAccounts++;
    }

    // here we make Display account details
    void display()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << endl;
    }
};

// Initialize static variable
int BankAccount::totalAccounts = 0;

int main()
{
    // Creating multiple objects
    BankAccount acc1("Ali", 5000);
    BankAccount acc2("Ahmed", 7000);
    BankAccount acc3("Hassan", 10000);

    // Display details
    acc1.display();
    acc2.display();
    acc3.display();

    // Display total accounts
    cout << "Total Bank Accounts Created: "
         << BankAccount::totalAccounts << endl;

    return 0;
}