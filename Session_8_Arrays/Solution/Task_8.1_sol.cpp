#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int arr[SIZE];      // Array to hold the integers
    int sum = 0;        // Variable to store the sum of the numbers
    double average;     // Variable to store the average of the numbers

    // Prompt user to enter 5 integers
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the numbers
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    // Calculate the average of the numbers
    average = sum / 5.0; // Using 5.0 to ensure the result is a double

    // Display the results
    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;

    return 0;
}
