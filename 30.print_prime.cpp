// Problem: Write a program that accepts a number n and prints all prime numbers less than or equal to n. Use a while loop and a function to check if a number is prime.

#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2; // Starting from the first prime number
    cout << "Prime numbers less than or equal to " << n << " are: " << endl;

    while (i <= n) {
        if (isPrime(i)) {
            cout << i << " ";
        }
        i++;
    }

    cout << endl;

    return 0;
}
