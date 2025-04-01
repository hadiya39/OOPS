// Problem: Round off an integer i to the next largest multiple of another integer j

#include <iostream>
using namespace std;

int roundUpToNextMultiple(int i, int j);

int main() {
    int i, j;

    cout << "Enter the integer i: ";
    cin >> i;
    cout << "Enter the integer j: ";
    cin >> j;

    int result = roundUpToNextMultiple(i, j);

    cout << "The next largest multiple of " << j << " after " << i << " is " << result << endl;

    return 0;
}

int roundUpToNextMultiple(int i, int j) {
    if (i % j == 0) {
        return i; // If already a multiple of j, return i
    } else {
        return ((i / j) + 1) * j; // Round to the next multiple of j
    }
}
