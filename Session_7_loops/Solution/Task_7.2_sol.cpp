#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
long long factorial(long long n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n - 1)
        return n * factorial(n - 1);
    }
}

int main() {
    long long number;

    // Prompt user to enter a non-negative integer
    cout << "Enter a non-negative integer: ";
    cin >> number;

    // Validate input
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate and display the factorial of the number
        cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    }

    return 0;
}
