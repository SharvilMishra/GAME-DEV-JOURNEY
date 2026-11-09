#include <iostream>
using namespace std;
int main(){

int score;
cout<<"Enter Your Score:";
cin>>score;

if(score>=91 && score<=100){
cout<<"FANTASTIC!!";
} else if(score>=71 && score<=90){
    cout<<"VERY GOOD";
} else if(score>=51 && score<=70){
    cout<<"GOOD";
} else if(score>=33 && score<=50){
    cout<<"AVERAGE";
} else if(score>=0 && score<=32){
    cout<<"FAIL";
}

return 0;

}