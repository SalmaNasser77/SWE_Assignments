/*
the general idea:

we have 2 arrays,
arr --> for storing the actual values of the array
freq --> for counting the frequency of each value

we index in the freq array with the value itself for example
if this is the input: 1 1 1 1 6 7 7 7 10
the arr will contain: 1 1 1 1 6 7 7 7 10
the freq will contain: 0 4 0 0 0 0 1 3 0 0 1
indecies:              0 1 2 3 4 5 6 7 8 9 10

notice at index 1, the freq array have 4 --> which is the number of it's occurrences in the original array

*/

#include<iostream>
#include<array>

using namespace std;

const int N = 100000;    // the maximum value the user can enter in the array, because we will be indexing with values 

int main()
{
    array<int, N> arr, freq = {0};
    int n;

    cout << "Please enter the number of elements\n";
    cin >> n;

    cout << "Please Enter the values in the array\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_number = -1, ans;  // max number stores the maximum frequency "number of occurance", while ans holds the value itself that have the maximum frequency
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;    // we are indexing with the array value and increasing it's frequency by 1

        if(freq[arr[i]] > max_number)
        {
            max_number = freq[arr[i]]; // we are storing the maximum frequency so far
            ans = arr[i];  // we are storing the actual value that had that maximum frequency
        }
    }

    cout << "The most occcured value = " << ans << endl;



    return 0;
}
