#include <iostream>   // Include the standard input/output header file.

using namespace std;

int main()
{
    int chk_year;   // Declare an integer variable 'chk_year'.

    cout << "Input a year :\n";   // Prompt the user to input a year.
    cin >>  chk_year;   // Read and store the user's input in 'chk_year'.
    if ((chk_year % 400) == 0)   // Check if 'chk_year' is divisible by 400 with no remainder.
        cout << chk_year << " is a leap year.\n";   // Print a message indicating that 'chk_year' is a leap year.
    else if ((chk_year % 100) == 0)   // Check if 'chk_year' is divisible by 100 with no remainder.
        cout << chk_year << " is not a leap year.\n";   // Print a message indicating that 'chk_year' is not a leap year.
    else if ((chk_year % 4) == 0)   // Check if 'chk_year' is divisible by 4 with no remainder.
        cout << chk_year <<" is a leap year.\n";   // Print a message indicating that 'chk_year' is a leap year.
    else
        cout << chk_year << " is not a leap year \n";   // Print a message indicating that 'chk_year' is not a leap year.

    return 0;
}
