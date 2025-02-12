#include <iostream>
#include <vector>

using namespace std;


// Function to swap the values of two integers by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


// Function to perform bubble sort on the given vector
void bubbleSort(vector<int> &arr) {
    int n = arr.size(); // Get the size of the array

    // Outer loop that goes through each element of the array
    for (int i = 0; i < n - 1; i++) {

        // Inner loop that compares adjacent elements and swaps them if necessary
        for (int j = 0; j < n - i - 1; j++) {

            // If the current element is greater than the next one, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Call the swap function to swap elements at index 'j' and 'j+1'
            }
        }
    }
}


// Function to print the elements of the array
void printArray(const vector<int> &arr) {
    // Iterate through each element in the array and print it
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    bubbleSort(arr);
    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
