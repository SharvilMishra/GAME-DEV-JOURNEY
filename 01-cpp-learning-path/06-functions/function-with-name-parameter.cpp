#include <iostream>
using namespace std;
void a(string name){
    cout<<"Hello "<<name<<endl;
}

int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    a(name);
    return 0;
}