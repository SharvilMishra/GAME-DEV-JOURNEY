#include<iostream>
using namespace std;

void dull(){
    int a;
    cout<< "HELLO"<< endl;
    cout <<"Enter a number from 0 to 4;"<< endl;
cin >> a;
switch(a){
    case 0:
        cout << "You entered zero."<< endl;
        break;
    case 1:
        cout << "You entered one."<< endl;
        break;
    case 2:
        cout << "You entered two."<< endl;
        break;
    case 3:
        cout << "You entered three."<< endl;
        break;
    case 4:
        cout << "You entered four."<< endl;
        break;
    default:
        cout << "Invalid input. Please enter a number from 0 to 4."<< endl;
}



}