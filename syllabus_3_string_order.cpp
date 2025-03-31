/*develop a program which will read a string and rewrite it in the alphabetical order. For example, the word STRING should be 
written as GINRST.*/
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string &str) {
    int n = str.length();
    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters if they are in the wrong order
                swap(str[j], str[j + 1]);
            }
        }
    }
}

int main() {
    string input;

    // Read the input string
    cout << "Enter a string: ";
    cin >> input;

    // Sort the string using bubble sort
    bubbleSort(input);

    // Output the sorted string
    cout << "Sorted string: " << input << endl;

    return 0;
}
