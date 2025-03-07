/*1. Create a Simple Class - Circle Area Calculation 
• Define a class Circle with an attribute radius. 
• Implement a function calculateArea() to compute and return the area of the circle. 
• Create an object, set the radius, and display the area. */
#include<iostream>
#include<math.h>
using namespace std;
class circle{
    private: float r;
    public: 
   
    float calarea(){
         cout<<"enter radius of circle:";
        cin>>r;
        return 3.14*r*r;
    }
};
int main(){
 circle c;
 float A= c.calarea();
 cout<<"Area of circle="<<A;
 return 0;
}