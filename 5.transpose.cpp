// Problem: Input matrix from the user and display it in matrix form

#include <iostream>
using namespace std;

int main() {
    int a[10][10], m, n;

    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    cout << "Enter the elements of the matrix row by row: ";
    for (int i = 0; i < m; i++) {  
        for (int j = 0; j < n; j++) {  
            cin >> a[i][j];
        }
    }

    cout << "Matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
