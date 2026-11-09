#include <iostream>
using namespace std;
int main(){

int arr[]= {2,4,6,8};
 int *p=arr;

 for(int i=0;i<4;i++){
    cout<<*p<<endl;
    p++;
 }

} 