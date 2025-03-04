/*Assignment 4: Overloading Type Conversion (Class to Basic Type) 
Create a class Time with attributes hours and minutes. Overload type conversion so that a Time 
object can be converted into an integer representing total minutes. */
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    void display() const
    {
        std::cout << hours << " hours and " << minutes << " minutes\n";
    }

    operator int() const
    {
        return (hours * 60) + minutes;
    }
};

int main()
{
    Time t1(2, 30);
    t1.display();

    int totalMinutes = t1;
    std::cout << "Total minutes: " << totalMinutes << std::endl;

    return 0;
}