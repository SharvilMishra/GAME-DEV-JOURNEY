#include<iostream>
using namespace std;

// Class definition for weapons and objects that have health

class Weapon {
public:
    string name;
    int damage;

    // Function to display weapon information
    void display() const {
        cout << "Weapon Name: " << name << endl;
        cout << "Damage: " << damage << endl;
    }

    // Function to apply damage to another object with health
    void inflictDamage(HealthBar& target) {
        if (target.health > 0) {
            target.health -= damage;
            cout << "Inflicted " << damage << " damage to the Health Bar." << endl;
            if (target.health <= 0) {
                cout << "Health Bar is now empty!" << endl;
            }
        } else {
            cout << "Target's health bar is already at zero or below." << endl;
        }
    }
};

// Class definition for objects that have a HealthBar
class HealthBar {
public:
    int health;

    // Constructor to initialize the health
    HealthBar(int initialHealth) : health(initialHealth) {}

    void display() const {
        cout << "Current Health: " << health << endl;
    }

    bool isAlive() const {
        return health > 0;
    }
};

// Main function
int main(){
    Weapon w1;
    HealthBar playerHealth(100); // Player starts with 100 health

    w1.name = "Excalibur";
    w1.damage = 20;

    cout << "Initial state of Excalibur and the player's health:" << endl;
    w1.display();
    playerHealth.display();

    cout << "\nAttacking the player with Excalibur..." << endl;
    w1.inflictDamage(playerHealth);

    playerHealth.display(); // Display updated health

    return 0;
}