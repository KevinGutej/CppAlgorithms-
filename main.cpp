#include <iostream>

using namespace std;

// Function declaration for insertion_sort, which sorts an array 'a' of length 'length'
void insertion_sort(int a[], int length);
// Function to swap two elements without using built-in functions
void swap(int &x, int &y);

int main()
{
    int a[] = {6, 1, 3, 8, 2, 5, 7, 9};  // Declare and initialize an array of integers
    int length = sizeof(a) / sizeof(a[0]);  // Dynamically calculate the length of the array

    insertion_sort(a, length);  // Call the insertion_sort function to sort the array

    // Loop to print the sorted array elements
    for(int i = 0; i < length; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;  // Output each element of the array with its index
    }

    return 0;  // Indicate successful program termination
}

// Function definition for insertion_sort
void insertion_sort(int a[], int length) {
    // Loop through the array starting from the second element (index 1)
    for(int i = 1; i < length; i++) {
        int current_key_value = a[i];  // Store the current element to be inserted in the correct position
        int j = i - 1;  // Initialize j to the previous index of i

        // Optimized shifting using swap function
        while(j >= 0 && a[j] > current_key_value) {
            swap(a[j + 1], a[j]);  // Swap elements instead of shifting manually
            j--;  // Move to the previous element
        }
    }
}

// Function definition for swap
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}



