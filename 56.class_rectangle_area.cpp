/*2. Class with Private Data Members and Getter/Setter Functions - Rectangle
Area Calculation
• Create a Rectangle class with private attributes length and width.
• Implement setter and getter functions.
• Calculate and display the area using calculateArea().*/
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    void setLength(int len)
    {
        length = len;
    }

    int getLength()
    {
        return length;
    }

    void setWidth(int wid)
    {
        width = wid;
    }
    int getWidth()
    {
        return width;
    }
    int claculateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;
    r.setLength(5);
    r.setWidth(5);
    int a = r.claculateArea();
    cout << a << endl;
    return 0;
}
