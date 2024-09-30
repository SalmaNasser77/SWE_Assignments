#include <algorithm>    // Including the Algorithm Library for sorting
#include <iostream>     // Including the Input/Output Stream Library
#include <vector>       // Including the Vector Library for using vectors
using namespace std;    // Using the Standard Namespace

// Function to test if the elements in the vector are consecutive
bool test(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end()); // Sorting the elements of the vector in ascending order

    // Loop through the vector to check if elements are consecutive
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i + 1] != (nums[i] + 1)) {
            return false; // If the elements are not consecutive, return false
        }
    }
    return true; // If all elements are consecutive, return true
}

// Main function
int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums;
    for(int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    cout << "\nCheck consecutive numbers in the said vector! "; // Calling the test function to check if elements are consecutive and displaying the result
    if(test(nums))
    {
        cout << "True\n";
    }
    else{
        cout << "False\n"
    }
}
