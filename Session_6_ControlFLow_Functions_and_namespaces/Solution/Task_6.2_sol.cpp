#include <iostream> // Include the input/output stream library
using namespace std; // Using standard namespace

int main() // Main function where the execution of the program starts
{
    int i, j, rows; // Declare integer variables i, j, and rows

    // Display message asking for input
    cout << "\n\n Display the pattern using number starting from 1:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows; // Read input for the number of rows from the user

    // Loop to print the pattern using numbers starting from 1
    for (i = 1; i <= rows; i++) // Loop for the number of rows
    {
        for (j = 1; j <= i; j++) // Nested loop for printing numbers in each row
        {
            cout << j; // Print the current value of 'j' (numbers starting from 1)
        }
        cout << endl; // Move to the next line after each row is printed
    }
    return 0;
}
