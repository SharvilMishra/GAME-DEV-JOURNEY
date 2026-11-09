/*Array and Pointers*/
#include <iostream>
using namespace std;
int main (){
    int arr[]= {2,4,6,8};

    int*p=arr;

    cout << *p<< endl;
    cout <<*(p+1) << endl;
    cout << *(p+2) << endl;

}