/*design a class template by name Vector and perform the following: 
● Find the smallest of the element in the Vector 
● Search for an element in the Vector 
● Find the average of the element in the array. */
#include <iostream>
#include <vector>
using namespace std;

template <typename T> // Define a template class for Vector
class Vector {
private:
    vector<T> vec;  // Vector to store elements

public:
    // Function to add elements to the vector
    void addElement(T element) {
        vec.push_back(element);
    }

    // Function to find the smallest element in the vector
    T findSmallest() {
        if (vec.size() == 0) {
            cout << "Vector is empty!" << endl;
            return T(); // Return default value for T (0 for int, 0.0 for double, etc.)
        }
        
        T smallest = vec[0];
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] < smallest) {
                smallest = vec[i];
            }
        }
        return smallest;
    }

    // Function to search for an element in the vector
    bool searchElement(T element) {
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == element) {
                return true;
            }
        }
        return false;
    }

    // Function to calculate the average of the elements in the vector
    double calculateAverage() {
        if (vec.size() == 0) {
            cout << "Vector is empty!" << endl;
            return 0;
        }

        T sum = 0;
        for (int i = 0; i < vec.size(); i++) {
            sum += vec[i];
        }
        return static_cast<double>(sum) / vec.size(); // Calculate average
    }

    // Function to display all elements in the vector
    void display() {
        cout << "Vector elements: ";
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a Vector object for integers
    Vector<int> intVec;
    
    // Add elements to the vector
    intVec.addElement(10);
    intVec.addElement(20);
    intVec.addElement(5);
    intVec.addElement(30);

    // Display elements
    intVec.display();

    // Find the smallest element in the vector
    int smallest = intVec.findSmallest();
    cout << "Smallest element: " << smallest << endl;

    // Search for an element
    int searchElement = 20;
    if (intVec.searchElement(searchElement)) {
        cout << "Element " << searchElement << " found in the vector!" << endl;
    } else {
        cout << "Element " << searchElement << " not found in the vector!" << endl;
    }

    // Calculate and display the average of the elements
    double average = intVec.calculateAverage();
    cout << "Average of elements: " << average << endl;

    // Create a Vector object for doubles
    Vector<double> doubleVec;
    
    // Add elements to the vector
    doubleVec.addElement(10.5);
    doubleVec.addElement(20.5);
    doubleVec.addElement(5.5);
    doubleVec.addElement(30.5);

    // Display elements
    doubleVec.display();

    // Find the smallest element in the vector
    double smallestDouble = doubleVec.findSmallest();
    cout << "Smallest element: " << smallestDouble << endl;

    // Search for an element
    double searchElementDouble = 20.5;
    if (doubleVec.searchElement(searchElementDouble)) {
        cout << "Element " << searchElementDouble << " found in the vector!" << endl;
    } else {
        cout << "Element " << searchElementDouble << " not found in the vector!" << endl;
    }

    // Calculate and display the average of the elements
    double averageDouble = doubleVec.calculateAverage();
    cout << "Average of elements: " << averageDouble << endl;

    return 0;
}
