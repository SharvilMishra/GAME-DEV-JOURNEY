#include<iostream>
using namespace std;

// Class for weapons

class Weapon {
public:
    string name;
    int damage;

    // Function to display weapon details
    void display() const {
        cout << "Weapon Name: " << name << endl;
        cout << "Damage: " << damage << endl;
    }

    // Function to inflict damage on another object with health
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

// Class for objects with a health bar

class HealthBar {
public:
    int health;

    // Constructor to initialize the health
    HealthBar(int initialHealth) : health(initialHealth) {}

    // Function to display current health
    void display() const {
        cout << "Current Health: " << health << endl;
    }

    // Check if the object is still alive
    bool isAlive() const {
        return health > 0;
    }
};

// Main function
int main(){
    // Create a weapon instance
    Weapon w1;

    // Set weapon details
    w1.name = "Excalibur";
    w1.damage = 100;

    // Display the weapon's details
    w1.display();

    // Create an object with a health bar (e.g., a player)
    HealthBar playerHealth(500); // Player starts with 500 health

    // Display initial health of the target
    cout << "\nInitial state of the target:" << endl;
    playerHealth.display();

    // Attack the target with the weapon
    w1.inflictDamage(playerHealth);

    // Display updated health after being attacked
    cout << "State of the target after being attacked:" << endl;
    playerHealth.display();

    return 0;
}