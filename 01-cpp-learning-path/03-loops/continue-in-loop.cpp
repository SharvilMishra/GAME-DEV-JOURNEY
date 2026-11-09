#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        if(i==5){
            continue; // This will skip the rest of the loop when i is equal to 5 and continue with the next iteration
        }
        cout << i << endl;
    }
}