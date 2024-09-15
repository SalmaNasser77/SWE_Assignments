// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    char op;
    float num1, num2;
 
    // It allows user to enter operator
    // i.e. +, -, *, /
    cout << "Enter the operation you want to preform (+, -, *, /)\n";
    cin >> op;
 
    // It allow user to enter the operands
    cout << "Enter the first number:\n";
    cin >> num1;

    cout << "Enter the second number:\n";
    cin >> num2;
 
    // Switch statement begins
    switch (op) {
    // If user enter +
    case '+':
        cout << "The Result = " << num1 + num2;
        break;
 
    // If user enter -
    case '-':
        cout << "The Result = " << num1 - num2;
        break;
 
    // If user enter *
    case '*':
        cout << "The Result = " << num1 * num2;
        break;
 
    // If user enter /
    case '/':
        cout << "The Result = " << num1 / num2;
        break;
 
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    }
    // switch statement ends
    
   cout << endl; 
    return 0;
}
