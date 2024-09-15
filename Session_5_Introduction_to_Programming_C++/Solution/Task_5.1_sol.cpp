#include <iostream>

using namespace std;

int main()
{
    string name;     // A variable to store the name of the user
    cout << "Please Enter your name\n";   // promoting the user to enter their name
    cin >> name;   // Taking the name of the user as an input 

    int age;  // A variable to store the age
    cout << "Please Enter your age\n";   // promoting the user to enter their name
    cin >> age;   // taking the age as an input from the user

    cout << "Hello " << name << ", are you " << age << " years old?\n";  // greeting the user with their name and age


    return 0;
}
