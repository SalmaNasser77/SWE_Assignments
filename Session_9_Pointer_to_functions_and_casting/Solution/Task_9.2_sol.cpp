#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the elements
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int SIZE, choice;       // variable to store the Size of the array
    
    // Prompt user to enter the size of the array
    cout << "Enter the number of elements\n"; 
    cin >> SIZE;

    int arr[SIZE];       // Array to hold the integers

    // Prompt user to enter integers
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Function pointer to sorting algorithm
    void (*sortFunction)(int[], int);

    // Prompt user to choose a sorting algorithm
    cout << "Choose a sorting algorithm:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Set the function pointer based on user choice
    switch (choice) {
        case 1:
            sortFunction = bubbleSort; // Point to the bubbleSort function
            break;
        case 2:
            sortFunction = selectionSort; // Point to the selectionSort function
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1; // Exit with error code
    }

    // Sort the array using the chosen algorithm
    sortFunction(arr, SIZE);

    // Display the sorted array
    cout << "Sorted array: ";
    printArray(arr, SIZE);

    return 0;
}
