#include <iostream>
using namespace std;

// Class definition
class character {
public:
    int age;
    int height;
    string name;

    // Function to display information (const-correct)
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Height: " << height << " cm" << endl;  // Adding units for clarity
        cout << "Age: " << age << " Years" << endl;
    }
};

int main() {

    character c1;

    // Correct way to use cin
    cout << "Enter Character Name: ";
    getline(cin, c1.name);  // Use getline for string input

    cout << "Enter Height (cm): ";
    cin >> c1.height;

    cout << "Enter Age: ";
    cin >> c1.age;

    c1.display();
    return 0;
}