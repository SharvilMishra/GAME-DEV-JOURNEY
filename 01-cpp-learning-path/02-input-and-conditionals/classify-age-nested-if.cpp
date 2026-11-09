#include <iostream>
using namespace std;
int main(){
    int age=24;
    if(age>=65){
        cout<<"Senior Citizen";
    }
    else{
        if(age>=18){
            cout<<"Adult";
        }
        else{
            cout<<"Minor";
        }
    }
}