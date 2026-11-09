#include <iostream>

// Function to print the star pattern
void printStarPattern(int n) {
    for (int i = 0; i < n; ++i) { // Loop for rows
        for (int j = 0; j <= i; ++j) { // Loop for columns
            std::cout << "* "; // Print an asterisk followed by a space
        }
        std::cout << "\n"; // Move to the next line after each row is printed
    }
}

int main() {
    int n = 5; // You can change this value to print a different size pattern

    printStarPattern(n);

    return 0;
}