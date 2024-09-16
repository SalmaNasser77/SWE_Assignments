#include <iostream>
#include <algorithm> // For std::sort

int main() {
    int size;

    // Prompt user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Check for valid size
    if (size <= 0) {
        std::cout << "Invalid size! Must be a positive integer." << std::endl;
        return 1;
    }

    // Dynamically allocate an array of the specified size
    int* arr = new int[size];

    // Prompt user to enter the elements of the array
    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Display the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Sort the array in descending order using a lambda function
    std::sort(arr, arr + size, [](int a, int b) {
        return a > b; // For descending order
    });

    // Display the sorted array
    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
