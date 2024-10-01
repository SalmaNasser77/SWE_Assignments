#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// Function to find the single number in a vector where every other number appears twice
int singleNumber(vector<int>& nums) {
    int ans = 0; // Variable to store the result (the single number)
    unordered_map<int, int> mp; // Hash map to store the count of each number

    // Loop through the input vector to count occurrences of each number
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++; // Increment the count for each number
    }

    // Loop through the map to find the number that appears only once
    for(auto pair : mp) {
        if(pair.second == 1) { // Check if the count is 1
            ans = pair.first; // Store the number in ans
        }
    }
    
    return ans; // Return the single number
}

int main() {
    int n; // Variable to store the number of elements
    cout << "Please Enter the number of elements\n"; // Prompt the user for input
    cin >> n; // Read the number of elements from the user

    vector<int> v; // Vector to store the input numbers
    for(int i = 0; i < n; i++) {
        int num; // Variable to store each number input by the user
        cin >> num; // Read a number from the user
        v.push_back(num); // Add the number to the vector
    }

    // Call the singleNumber function to find the number that appears only once
    int result = singleNumber(v);
    cout << result << endl; // Print the result

    return 0; // Exit the program
}
