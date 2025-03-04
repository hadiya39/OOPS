//check an alphabet is a vowel or not
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    // Check for both uppercase and lowercase vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is not a vowel." << endl;
    }

    return 0;
}