#include<iostream>
using namespace std;

int main ()
{
    int arr[10], n, i, max, min;

    // Prompt user to enter the size of the array
    cout << "Enter the size of the array : ";
    cin >> n;

    // Prompt user to enter elements of the array
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    // Initialize max and min to the first element of the array
    max = arr[0];
    min = arr[0];

    // Find the maximum value in the array
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    // Find the minimum value in the array
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    // Output the largest and smallest elements
    cout << "Largest element : " << max << endl;
    cout << "Smallest element : " << min << endl;

    return 0;
}
