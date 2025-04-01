// Problem: Find factorial of a number using recursion

#include <iostream>
using namespace std;

long int fact(int);

int main() {
    int n;
    long int ans;

    cout << "Enter the number: ";
    cin >> n;

    ans = fact(n);

    cout << "Factorial of " << n << " is " << ans << endl;

    return 0;
}

long int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
