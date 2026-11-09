#include <iostream>
using namespace std;
//Class
class character{

    public :

    int age;
    int height;
    string name;


//Function
void display() const{
    
cout<< "Name:"<<name<<endl;
cout<<"Height:"<<height<<"cm"<<endl;
cout<<"Age:"<<age<<endl;
}};

int main(){

    character c1;

    cout << "Enter Character Name: ";
    getline(cin, c1.name);  // Use getline for string input

    cout << "Enter Height (cm): ";
    cin >> c1.height;

    cout << "Enter Age: ";
    cin >> c1.age;
    c1.display();
    return 0;
}