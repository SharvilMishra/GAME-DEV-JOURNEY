#include <iostream>
using namespace std;
int main(){

    double prices[]={5.99,3.2,9.99,29.99};

    double total=0;
    for(int x=0;x<4;x++){
        total+=prices[x];
    }
    cout << "Total: " << total << endl;
}