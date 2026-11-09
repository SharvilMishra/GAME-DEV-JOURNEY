#include <iostream>
using namespace std;
// FUNCTION
void dull()
{
    int a;
    cout << "HELLO" << endl;
    cout << "Enter a number from 0 to 4:" << endl;
    cin >> a;
    // VALIDATION
    if (a < 0 || a > 4)
    {
        cout << "Please enter a valid number!" << endl;
        return;
    }
    // LOOP
    for (; a < 5; a++)
    {
        a = a + 10;
        a = a * 2;
        cout << a << endl;
    }
}
// MAIN FUNCTION
int main()
{
    cout << " Enter 1 or 2 to run the program:" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        dull();
    }
    else if (choice == 2)
    {
        cout << "You chose to exit the program." << endl;
    }
    else
    {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }
    return 0;
}