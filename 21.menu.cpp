//create menu based program where the user can choose between vegetarian and non vegetarian 
#include <iostream>
using namespace std;

int main() {
    int menuChoice, subMenuChoice;

    cout << "Choose a menu option:\n1. Vegetarian\n2. Non-Vegetarian\n";
    cin >> menuChoice;

    switch (menuChoice) {
        case 1:
            cout << "Vegetarian Menu:\n1. Paneer Curry\n2. Veg Biryani\n";
            cin >> subMenuChoice;
            switch (subMenuChoice) {
                case 1: cout << "You chose Paneer Curry.\n"; break;
                case 2: cout << "You chose Veg Biryani.\n"; break;
                default: cout << "Invalid choice in Vegetarian menu.\n";
            }
            break;
        case 2:
            cout << "Non-Vegetarian Menu:\n1. Chicken Curry\n2. Mutton Biryani\n";
            cin >> subMenuChoice;
            switch (subMenuChoice) {
                case 1: cout << "You chose Chicken Curry.\n"; break;
                case 2: cout << "You chose Mutton Biryani.\n"; break;
                default: cout << "Invalid choice in Non-Vegetarian menu.\n";
            }
            break;
        default:
            cout << "Invalid menu option.\n";
    }

    return 0;
}