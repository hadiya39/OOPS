//hybrid inheritance___multipath(multiple + hierarchical)--
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "This is class A\n";
    }
};

class B : virtual public A {};  // Virtual Inheritance
class C : virtual public A {};  // Virtual Inheritance

class D : public B, public C {};  // D now inherits only one copy of A

int main() {
    D obj;
    obj.show();  // No ambiguity

    return 0;
}
    /*multipath inheritance occurs when a class is derived from two more classes that have a common base class. this can lead to the
    ambiguity called diamond problem, where a derived class inherits multiple copies of the same base class members.
    to avoid this error, we use virtual base class ensuring only one copy of the base class is inherited. VIRTUAL keyword is used 
    while inheriting */