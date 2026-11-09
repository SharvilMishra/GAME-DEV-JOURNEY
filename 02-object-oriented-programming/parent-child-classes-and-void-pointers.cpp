#include <iostream>
using namespace std;

class Child
{
public:
    int age;
    char a;
    void child()
    {

        cout << "Enter Child name:" << endl;
       
        cin >> a;

        
         cout << "Enter Child age:" << endl;

        cin >> age;
    }
};
class Parent
{
public:
    int age;
    char b;
    void parent()
    {

        cout << "Enter Parent name:" << endl;
       

        cin >> b;

        
          cout << "Enter Parent age:" << endl;

        cin >> age;
    }
};

int main()
{
    Child z;
    Parent x;
    z.child();
    x.parent();

    void *ptr1 = &z;
    void *ptr2 = &x;

    wcerr << "Child name: " << z.a << endl;
    wcerr << "Parent name: " << x.b << endl;
}