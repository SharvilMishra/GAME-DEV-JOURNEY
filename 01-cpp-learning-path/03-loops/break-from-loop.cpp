#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        if(i==5){
            break; // This will exit the loop when i is equal to 5
        }
        cout << i << endl;
    }
}