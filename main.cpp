#include <iostream>


using namespace std;

const int N = 5;// Define a constant N with a value of 5, representing the size of the array

// Function to sort the array in ascending order using Bubble Sort
void sortuj(int A[]) {
    // Outer loop to ensure multiple passes through the array
    for(int i = 1; i < N; i++) {
        // Inner loop to compare adjacent elements and swap if needed
        for(int j = 0; j < N - 1; j++) {
            // If the current element is greater than the next, swap them
            if(A[j] > A[j + 1])
                swap(A[j], A[j + 1]);  // Swap the elements
        }
    }
}

int main() {
    // Initialize an array A of 5 integers with given values
    int A[5] = {13, 9, 17, 5, 15};

    // Display the array before sorting
    cout << "Not sorted: " << endl;
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";  // Print each element followed by a space
    }

    sortuj(A);  // Call the sortuj function to sort the array

    cout << endl;  // Print a newline for better formatting

    // Display the array after sorting
    cout << "Sorted: " << endl;
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";  // Print each sorted element followed by a space
    }

    return 0;  // Return 0 to indicate successful program execution
}

/*Idea algorytmu polega na porównywaniu sąsiednich elementów i zamienianiu ich miejscami,
jeśli są w złej kolejności. Proces powtarza się wielokrotnie, aż lista będzie posortowana.*/


