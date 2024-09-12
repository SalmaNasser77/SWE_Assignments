#include <iostream>

int main() {
    // Step 1: Declare an integer variable and initialize it
    int number = 10;
    
    // Step 2: Declare a raw pointer that points to the integer variable
    int* ptr = &number;
    
    // Step 3: Print the size of the pointer itself
    std::cout << "Size of the pointer (in bytes): " << sizeof(ptr) << std::endl;
    
    // Step 4: Print the size of the integer variable
    std::cout << "Size of the integer variable (in bytes): " << sizeof(number) << std::endl;
    
    // Step 5: Use the pointer to modify the value of the integer variable
    *ptr = 20;
    
    // Step 6: Print the value of the integer variable
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Value of number through pointer: " << *ptr << std::endl;
    
    return 0;
}
