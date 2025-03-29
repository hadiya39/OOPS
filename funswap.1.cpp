//swap two numbers using functions(call by value)
#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
    int x,y;
    cout<<"enter the numbers to be swapped: \n";
    cin>>x>>y;
    cout<<"the numbers before swapping are: "<<x<<"  "<<y;
    swap(x,y); 
    
    return 0;
}

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"\nthe numbers after swapping are: "<<x<<"  "<<y;

}