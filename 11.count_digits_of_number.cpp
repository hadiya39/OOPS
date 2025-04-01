// Problem: Count the digits of a number

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1; 
    } else {
       
        if (num < 0) {
            num = -num; 
        }

        while (num > 0) {
            num /= 10;  
            count++;  
        }
    }
    cout << "The number of digits is: " << count << endl;

    return 0;
}
