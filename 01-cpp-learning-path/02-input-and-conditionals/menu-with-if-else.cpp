#include <iostream>
using namespace std;
int main(){
    int choice=2;
    if(choice==1){
        cout<<"Coffee";
    }
    else if(choice==2){
        cout<<"Tea";
    }
    else if(choice==3){
        cout<<"Water";
    }
    else{
        cout<<"Invalid choice";
    }
}/*the next code new24 helps make this type of if-else-if case shorter and easier using switch*/