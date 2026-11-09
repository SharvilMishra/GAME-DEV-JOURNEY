#include <iostream>
using namespace std;

class MyClass{
    public:
     MyClass();
     ~MyClass();
};

MyClass::MyClass(){
    cout<<"MyClass constructor called"<<endl;

}

MyClass:: ~MyClass(){
    
    cout<<"MyClass destructor called"<<endl;

}

int main(){
    MyClass obj;
    return 0;
}
