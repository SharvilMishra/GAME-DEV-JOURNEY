#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int msg;
    cout << " Alpha" << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Magenta color
    cout << "Enter your message: ";
    cin >> msg;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Green color
    cout << "SEEN " << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red color
    cout << "BLOCKED " << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // Blue color
    cout << "NIKAL  " << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // Cyan color
    cout << "BHAG JA YHA SE  " << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // Yellow color
    cout << "NALLE " << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // White color
    cout << "WHITE " << endl;
    
    return 0;
}