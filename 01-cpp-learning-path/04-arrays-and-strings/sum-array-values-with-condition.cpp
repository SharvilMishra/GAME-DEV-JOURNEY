#include <iostream>
using namespace std;
int main(){
    int arr[]={0,2,4,6};
    int res=0;

    for(auto x: arr){
     if(x<5){
        res+=x;
     }
    }
    cout << "Sum: " << res << endl;
}