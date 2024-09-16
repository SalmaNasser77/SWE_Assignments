#include <iostream>

int main() {
    int num = 10;

    // Lambda capturing by value (initially incorrect)
    auto lambda = [num]() {
        // Attempt to modify the captured variable (will cause compilation error)
        // num = 20;

        std::cout << "Captured value: " << num << std::endl;
    };

    lambda(); // Invoke the lambda

    // Fix the lambda to capture by reference
    auto fixedLambda = [&num]() {
        num = 20; // Modify the captured variable

        std::cout << "Modified value: " << num << std::endl;
    };

    fixedLambda(); // Invoke the fixed lambda

    // Print the value outside the lambda to verify changes
    std::cout << "Outside lambda: " << num << std::endl;

    return 0;
}
