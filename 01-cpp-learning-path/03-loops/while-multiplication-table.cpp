#include <iostream>
using namespace std;
int main()
{
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    while (i <= 10)
    {
        cout << num << "X" << i << "=" << num * i << endl;
        i++;
    }
    return 0;
}
/* This while loop is used to print the multiplication table of a given number.
 The user is prompted to enter a number, and then the loop iterates from 1 to 10,
 printing the product of the number and the current iteration value (i). */