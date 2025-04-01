// Problem: Write a program that generates the following pyramid pattern for a given number of rows n:

//        1  
//      1  2  
//     1  2  3  
//   1  2  3  4  
//  1  2  3  4  5

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
