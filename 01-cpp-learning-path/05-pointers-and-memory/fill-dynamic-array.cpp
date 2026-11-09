#include <iostream>
using namespace std;
int main(){
    int size =8;

    int *p= new int[size];
   
    for ( int i=0; i<size; i++){
 p[i]=i+3;
    }

    for( int i=0;i<size;i++){
        cout<<p[i]<<endl;
    }
    delete [] p;
}