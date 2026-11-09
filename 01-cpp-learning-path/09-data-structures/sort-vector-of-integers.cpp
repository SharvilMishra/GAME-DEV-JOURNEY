#include <iostream>
#include <algorithm> // For std::sort
#include <vector>    // For std::vector

int main() {
    // Initialize a vector with some values
    std::vector<int> numbers = {5, 3, 8, 2, 1};

    // Print the original array
    std::cout << "Original array: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the array using std::sort
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}