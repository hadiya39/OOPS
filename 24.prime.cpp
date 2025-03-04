#include <iostream>
using namespace std;

int main() {
    int num, i, isPrime = 1;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
        isPrime = 0;
    else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime Number\n";
    else
        cout << "Not a Prime Number\n";

    return 0;
}