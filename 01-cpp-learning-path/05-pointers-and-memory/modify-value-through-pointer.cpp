#include <iostream>
using namespace std;
int main(){
    int num =42;
    int *p=&num;
    *p=8;
    cout << num;
}