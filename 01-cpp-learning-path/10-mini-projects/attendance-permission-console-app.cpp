#include <iostream>
#include<windows.h>
using namespace std;

// FUNCTION
void angryTeacher()
{
    int a;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Magenta color
    cout << "Enter your attendance percentage: ";
    cin >> a;

    if (a >= 75 && a <= 100)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Green color
        cout << "You are permitted to give the exams." << endl;
    }
    else if (a >= 0 && a < 75)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red color
        cout << "You are NOT permitted. GO MEET THE HOD RN!!" << endl;
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red color
        cout << "Invalid attendance percentage." << endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // Reset to default color
}

// MAIN FUNCTION
int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Magenta color
    cout << "Enter 1 to run or 2 to exit: ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        angryTeacher();
    }
    else if (choice == 2)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red color
        cout << "Program exited." << endl;
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red color
        cout << "Invalid choice." << endl;
    }

    return 0;
}