#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "X" << i << "=" << num * i << endl;
    }
}
/* This for loop is used to print the multiplication table of a given number.
 The user is prompted to enter a number, and then the loop iterates from 1 to 10,
 printing the product of the number and the current iteration value (i). */