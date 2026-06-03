#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create and write in file here
    ofstream writeFile("notes.txt");

    writeFile << "Welcome to OOP File handling lab." << endl;
    writeFile << "File handling is important." << endl;
    writeFile << "we had studied OOP but still we dont have concpets." << endl;

    writeFile.close();

    // now here it is Read file content
    ifstream readFile("notes.txt");
    string line;

    cout << "File Contents:" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    // Append data to the  file here
    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Hassan Ali" << endl;
    appendFile << "Roll No: 12345" << endl;

    appendFile.close();

    cout << "\nData appended successfully." << endl;

    return 0;
}