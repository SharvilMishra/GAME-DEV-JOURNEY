/*Classes And Objects
Identity, Attribute and Behaviour
Object is self-contained, with its own identity
each object has its own attribute describing current state each exabits its own behaviour
demosntrating what they can do */
#include <iostream>
using namespace std;

class BankAccount{
    public:
void sayHi(){
    cout << "HI"<< endl;
    
}
};

int main(){
    BankAccount test;
    test.sayHi();
}
