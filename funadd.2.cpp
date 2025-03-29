//add and subtract two numbers using functions(a+b,a-b,b-a)
#include<iostream>
using namespace std;
int add(int,int);
int subtract(int,int);
int main()
{
    int a,b;
    cout<<"enter two integers:\n";
    cin>>a>>b;
    add(a,b);
    subtract(a,b);
    return 0;
}

int add(int a, int b)
{
    int c;
    c=a+b;
    cout<<a<<"+"<<b<<"="<<c<<"\n";
    return 0;
}

int subtract(int a, int b)
{
    int c,d;
    c=a-b;
    d=b-a;
    cout<<a<<"-"<<b<<"="<<c<<"\n"; 
    cout<<b<<"-"<<a<<"="<<d<<"\n";
    return 0;
}