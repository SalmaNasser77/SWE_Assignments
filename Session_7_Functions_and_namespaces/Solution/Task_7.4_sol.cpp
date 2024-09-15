#include <iostream>
#include <cmath> // For M_PI

// Function to calculate the area of a Rectangle
double calculateRectangleArea(double width, double height) {
    return width * height;
}

// Function to calculate the area of a Circle
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a Triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to display the menu and get user choice
char displayMenu() {
    char choice;
    std::cout << "Area Calculator Menu:\n";
    std::cout << "R - Calculate the area of a Rectangle\n";
    std::cout << "C - Calculate the area of a Circle\n";
    std::cout << "T - Calculate the area of a Triangle\n";
    std::cout << "Q - Quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return toupper(choice); // Convert to uppercase for consistency
}


// Main program
int main() {
    char choice;
    double width, height, radius, base;
    
    while (true) {
        choice = displayMenu();
        
        switch (choice) {
            case 'R':
                std::cout << "Enter width of the rectangle: ";
                std::cin >> width;
                std::cout << "Enter height of the rectangle: ";
                std::cin >> height;
                std::cout << "Area of the Rectangle: " << calculateRectangleArea(width, height) << std::endl;
                break;
            
            case 'C':
                std::cout << "Enter radius of the circle: ";
                std::cin >> radius;
                std::cout << "Area of the Circle: " << calculateCircleArea(radius) << std::endl;
                break;
            
            case 'T':
                std::cout << "Enter base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the Triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            
            case 'Q':
                std::cout << "Exiting the program." << std::endl;
                return 0; // Exit the program
            
            default:
                std::cout << "Invalid choice. Please enter R, C, T, or Q." << std::endl;
                break;
        }
    }

    return 0;
}
