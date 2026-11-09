#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int choice;

    while(true)
    {
        cout << "\nFLASHLIGHT MENU\n";
        cout << "1. ON\n";
        cout << "0. OFF\n";
        cout << "2. EXIT\n";

        cin >> choice;

        if(choice == 1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

            cout << "FLASHLIGHT ON 🔦" << endl;
        }
        else if(choice == 0)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

            cout << "FLASHLIGHT OFF" << endl;
        }
        else if(choice == 2)
        {
            cout << "Exiting..." << endl;
            break;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }

    return 0;
}