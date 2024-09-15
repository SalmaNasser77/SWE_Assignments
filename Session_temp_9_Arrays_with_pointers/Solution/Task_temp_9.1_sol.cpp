#include <iostream>
using namespace std;

// Function to swap the values of two integers using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value pointed to by a in a temporary variable
    *a = *b;       // Assign the value pointed to by b to the location pointed to by a
    *b = temp;     // Assign the temporary variable's value to the location pointed to by b
}

int main() {
    int x, y; // Variables to hold the values input by the user

    // Prompt user to enter two integers
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;

    // Display the values before swapping
    cout << "Before swapping:" << endl;
    cout << "First integer: " << x << endl;
    cout << "Second integer: " << y << endl;

    // Call the swap function with the addresses of x and y
    swap(&x, &y);

    // Display the values after swapping
    cout << "After swapping:" << endl;
    cout << "First integer: " << x << endl;
    cout << "Second integer: " << y << endl;

    return 0;
}
