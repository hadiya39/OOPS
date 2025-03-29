/*Virtual Functions in C++

A virtual function is a member function in a base class that can be overridden in a derived class.
 It allows runtime polymorphism and ensures that the correct function is called for an object, regardless of the reference type.

Key Features:

1. Declared using the virtual keyword in the base class.


2. Allows function overriding in the derived class.


3. Uses dynamic binding (late binding) at runtime.


4. Accessed through base class pointers or references.*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {  // Virtual function
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof Woof!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow Meow!\n";
    }
};

int main() {
    Animal* animal;  // Base class pointer

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->makeSound();  // Calls Dog's makeSound()

    animal = &cat;
    animal->makeSound();  // Calls Cat's makeSound()

    return 0;
}