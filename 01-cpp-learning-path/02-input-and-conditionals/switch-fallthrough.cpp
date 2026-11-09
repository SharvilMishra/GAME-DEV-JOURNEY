#include <iostream>
using namespace std;
int main(){
int x = 3;
switch(x) {
  case 2:
    x = 6;
  case 3:
    x = 9;
  case 4:
    x = 7;
    break;
  case 5:
    x = 8;
}
cout << x;
}