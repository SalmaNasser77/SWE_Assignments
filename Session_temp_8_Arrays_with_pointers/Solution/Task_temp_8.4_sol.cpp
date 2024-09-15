#include <iostream>

// Function that takes a pointer to an array and its size
void printArraySize(int* arr, int size) {
    // Inside the function, sizeof(arr) gives the size of the pointer
    std::cout << "Inside function - Size of arr (pointer): " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of a single element: " << sizeof(arr[0]) << " bytes" << std::endl;
    std::cout << "Number of elements (passed as parameter): " << size << std::endl;
}

int main() {
    // Declare a static array of integers and initialize it
    int arr[] = {10, 20, 30, 40, 50};
    
    // Calculate the number of elements
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Print the size of the array and its elements in main
    std::cout << "Outside function - Size of arr: " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of a single element: " << sizeof(arr[0]) << " bytes" << std::endl;
    
    // Pass the array and its size to the function
    printArraySize(arr, size);
    
    return 0;
}
