#include <iostream>
using namespace std;

double calculate(double a, double b, char op){

switch(op){

case '+': return a+b;
case '-': return a-b;
case '*': return a*b;
case '/': return (b !=0 ) ? a/b : 0;
default: return 0;
}


}
int main(){

double x,y;
char op;

cout<<"Enter Number Operator Number (e.g. 5*6)\n";
cin >> x >> op >> y ;

cout<<"Result:"<< calculate(x,y,op)<<endl;

return 0;
}