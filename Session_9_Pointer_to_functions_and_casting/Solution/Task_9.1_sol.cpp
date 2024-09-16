#include <iostream>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Function pointer declaration
    int (*operation)(int, int) = nullptr;
    
    char choice;
    int num1, num2, result;

    // Prompt user for operation choice
    std::cout << "Choose operation (+, -): ";
    std::cin >> choice;

    // Prompt user for numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Set the function pointer based on user choice
    switch (choice) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 1;
    }

    // Perform the operation and display the result
    if (operation != nullptr) {
        result = operation(num1, num2);
        std::cout << "The result = " << result << std::endl;
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
