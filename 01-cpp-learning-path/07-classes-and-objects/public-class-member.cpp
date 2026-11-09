#include<iostream>
#include<string>
using namespace std;

class Myclass{
    public: 
    string name;
};

int main(){
    Myclass MyObj;
    MyObj.name= "Some name";
    cout<<MyObj.name<<endl;
    return 0;

}