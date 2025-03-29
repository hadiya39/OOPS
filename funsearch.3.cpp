// Function to search an element in an integer array using functions (passing array to function)
#include <iostream>
using namespace std;
int search(int a[], int n, int x);

int main() {
    int a[50], n, x, i, d;
    cout<<"Enter the size of integer array:\n";
    cin>>n;
    cout<<"Enter elements of integer array:\n";
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<"Enter the element to search:\n";
    cin>>x;
    d = search(a, n, x);
    if (d == -1) {
        cout<<"Not found\n";
    } else {
        cout<<"Found at location "<<d<<"\n";
    }
    return 0;
}

int search(int a[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (x == a[i]) {
            return i + 1; // Returning 1-based index
        }
    }
    return -1; // Not found
}