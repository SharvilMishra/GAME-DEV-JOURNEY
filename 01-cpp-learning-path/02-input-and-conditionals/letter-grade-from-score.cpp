#include <iostream>
using namespace std;
int main (){

string name;
cout<<" ENTER YOUR NAME"<<endl;
cin>>name;

int score;
cout<<"ENTER YOUR SCORE"<<endl;
cin>>score;

if(score>=81 && score<=100){
    cout<<"GRADE A"<<endl;
} else if(score>=61 && score<=80){
    cout<<"GRADE B"<<endl;
}else if(score>=51 && score<=60){
    cout<<"GRADE C"<<endl;
}else if(score>=33 && score<=50){
    cout<<"GRADE D"<<endl;
}else if(score>=0 && score<=32){
    cout<<"GRADE E"<<endl;
}else if(score<<0 && score>>100){
   cout<<"FALSE STATEMENT";
}

return 0;
}