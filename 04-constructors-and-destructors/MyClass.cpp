#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(){

    cout << "MyClass constructor called"<< endl;

}

MyClass::~MyClass(){

    cout << "MyClass destructor called"<<endl;
}