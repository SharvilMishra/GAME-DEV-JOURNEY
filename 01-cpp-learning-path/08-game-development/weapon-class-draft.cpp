#include<iostream>
using namespace std;

//Class

class weapon{

    public:

    string name;
    int damage;

    //Function for weapon Details
    void display() const {
        cout<< "Weapon Name: "<<name<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
    //Function to inflict damage on another object with health
    void inflictDamage(healthBar& target){
        if(target.health > 0){
            target.health -= damage;
            cout<<"Inflicted "<<damage<<" damage to the Health Bar."<<endl;
            if(target.health <= 0){
                cout<<"Health Bar is now empty!"<<endl;
            }
        } else {
            cout<<"Target's health bar is already at zero or below."<<endl;
        }
    }
};

//Main Function
int main(){

    weapon w1;

    w1.name = "Excalibur";
    w1.damage = 100;
    w1.display();
    return 0;
}