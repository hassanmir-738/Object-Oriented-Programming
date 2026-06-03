#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create and write student details
    ofstream file("students.txt");

    file << "Name: Ali" << endl;
    file << "Roll No: 101" << endl;

    file << "Name: Absar" << endl;
    file << "Roll No: 03" << endl;

    file << "Name: Hassan" << endl;
    file << "Roll No: 02" << endl;

    file.close();

    // Read and display student details
    ifstream readFile("students.txt");

    string line;

    cout << "Student Details:" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}