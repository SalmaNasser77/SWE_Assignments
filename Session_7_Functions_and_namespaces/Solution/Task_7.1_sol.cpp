#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int maxOfTwo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to find the maximum of three integers using the maxOfTwo function
int maxOfThree(int a, int b, int c) {
    // Find the maximum of the first two numbers
    int maxAB = maxOfTwo(a, b);
    // Find the maximum of the result and the third number
    return maxOfTwo(maxAB, c);
}

int main() {
    int x, y, z;

    // Prompt user to enter three integers
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;
    cout << "Enter the third integer: ";
    cin >> z;

    // Find the maximum of the three integers
    int maxNumber = maxOfThree(x, y, z);

    // Display the result
    cout << "The maximum of " << x << ", " << y << ", and " << z << " is: " << maxNumber << endl;

    return 0;
}
