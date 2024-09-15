#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Define the size of the array
    int arr[SIZE];      // Array to hold the integers
    int sum = 0;        // Variable to store the sum of the array elements

    // Prompt user to enter the elements of the array
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i]; // Input elements into the array
    }

    // Pointer to the first element of the array
    int* ptr = arr;

    // Calculate the sum of the array elements using pointer arithmetic
    for (int i = 0; i < SIZE; i++) {
        sum += *(ptr + i); // Access the array element using pointer arithmetic
    }

    // Display the result
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}
