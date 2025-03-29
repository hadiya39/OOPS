#include <iostream>
using namespace std;

int main() {
    // Allocating memory for a single variable using new
    int* singleVar = new int;  // Dynamically allocate memory for an integer
    *singleVar = 10;  // Assigning a value to the allocated memory
    cout << "Single Variable Value: " << *singleVar << endl;  // Output the value

    // Deallocating memory for the single variable using delete
    delete singleVar;  // Free the dynamically allocated memory

    // Allocating memory for an array of integers using new
    int* arr = new int[5];  // Dynamically allocate memory for an array of 5 integers

    // Assigning values to the array
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;  // Assign values like 10, 20, 30, 40, 50
    }

    // Printing the values of the array
    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocating memory for the array using delete[]
    delete[] arr;  // Free the dynamically allocated memory for the array

    return 0;
}