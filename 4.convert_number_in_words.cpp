// Problem: Convert a number into words

#include <iostream>
#include <string>
using namespace std;

void convertToWords(int num);

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    convertToWords(num);

    return 0;
}

void convertToWords(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num == 0) {
        cout << "Zero" << endl;
        return;
    }

    if (num / 100 > 0) {
        cout << ones[num / 100] << " Hundred ";
        num %= 100;
    }

    if (num >= 10 && num < 20) {
        cout << teens[num - 10] << endl;
    } else {
        if (num / 10 > 0) {
            cout << tens[num / 10] << " ";
            num %= 10;
        }
        if (num > 0) {
            cout << ones[num] << endl;
        }
    }
}
