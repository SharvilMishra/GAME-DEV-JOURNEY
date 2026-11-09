#include <iostream>
using namespace std;
int main(){
    int  a;
cout<< "Enter the index of the age you want to access (0-9): "<< endl;
    cin>> a;
    double ages[]={ 10.5, 20.3, 30.7, 40.2, 50.8, 60.1, 70.4, 80.6, 90.9, 100.0};

    cout<< ages[a];

}