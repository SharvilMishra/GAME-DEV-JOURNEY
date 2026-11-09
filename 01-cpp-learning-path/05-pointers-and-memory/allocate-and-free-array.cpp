#include <iostream>
using namespace std;
int main(){
    int size= 8;
    int *p= new int [size];

    p[0]=1;
    p[1]=2;
    p[2]=3;

    for(int i=0;i<size;i++){
        cout<<p[i]<<endl;
    }
    delete [] p;
}