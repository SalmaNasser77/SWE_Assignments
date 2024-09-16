#include <iostream>

// Function prototype
void (*funcPtrWithCapture)(int);

int main() {
    int capturedValue = 42;
    auto lambdaWithCapture = [capturedValue](int x) {
        std::cout << "Captured value: " << capturedValue << ", Parameter value: " << x << std::endl;
    };

    // Attempt to assign a lambda with capture to a function pointer
    // This should cause a compilation error in standard-compliant compilers
    funcPtrWithCapture = lambdaWithCapture; // Attempt to assign lambda to function pointer

    // Uncommenting the line below should produce a compilation error
    funcPtrWithCapture(20);  // This line should not compile if the previous line does not

    // Call lambda directly to demonstrate it works
    lambdaWithCapture(20);  // This will work fine

    return 0;
}
