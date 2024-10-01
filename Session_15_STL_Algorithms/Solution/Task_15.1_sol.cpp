#include <iostream>  // For input/output operations
#include <string>    // For using the std::string class
#include <stack>     // For using the stack data structure

using namespace std;  // To avoid writing std:: before standard library functions

// Function to check if a given string of parentheses is valid
bool isValid(string s) {
    bool valid = true;  // Assume the string is valid initially
    stack<char> st;     // Create a stack to hold opening brackets

    // Loop through each character in the string
    for(int i = 0; i < s.size(); i++) {
        // If the current character is an opening bracket, push it to the stack
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        // If the current character is a closing parenthesis ')'
        // and the stack is not empty, check if the top of the stack is '('
        else if (s[i] == ')' && st.size() && st.top() != '(') {
            valid = false;  // If the top is not '(', the string is invalid
            break;          // Exit the loop early
        }
        // If the current character is a closing bracket ']' and the stack is not empty,
        // check if the top of the stack is '['
        else if(s[i] == ']' && st.size() && st.top() != '[') {
            valid = false;  // If the top is not '[', the string is invalid
            break;          // Exit the loop early
        }
        // If the current character is a closing brace '}' and the stack is not empty,
        // check if the top of the stack is '{'
        else if(s[i] == '}' && st.size() && st.top() != '{') {
            valid = false;  // If the top is not '{', the string is invalid
            break;          // Exit the loop early
        }
        // If the current character is a valid closing bracket and matches the top of the stack
        else {
            if(st.size()) st.pop();  // Pop the opening bracket from the stack
            else {
                valid = false;  // If the stack is empty but a closing bracket appears, it's invalid
                break;          // Exit the loop early
            }
        }
    }

    // After the loop, if the stack is not empty, the string has unmatched opening brackets
    if(!st.empty()) valid = false;

    return valid;  // Return the validity of the string
}

int main() {
    string s;       // Input string to hold the parentheses
    cin >> s;       // Read input from the user

    // Call the isValid function to check if the string has valid parentheses
    if(isValid(s)) {
        cout << "true\n";  // If valid, print "true"
    }
    else {
        cout << "false\n"; // If not valid, print "false"
    }

    return 0;
}
