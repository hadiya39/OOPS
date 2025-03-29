/*a pure virtual function is a function that has no implementation in the base class and must be overridden in 
the derived classes. it is declared using =0 in a abstract class*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle\n";
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square\n";
    }
};

int main() {
    Shape* shape1;
    Circle c;
    Square s;

    shape1 = &c;
    shape1->draw();  // Calls Circle's draw()

    shape1 = &s;
    shape1->draw();  // Calls Square's draw()

    return 0;
}