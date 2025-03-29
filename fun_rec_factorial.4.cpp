//find factorial of a number using recursion
#include<iostream>
using namespace std;
long int fact(int);
int main()
{
    int n;
    long int ans;
    cout<<"enter the number:\n";
    cin>>n;
    ans=fact(n);
    cout<<"Factorial of "<<n<<"is "<<ans;
    return 0;
}

long int fact(int n)
{
    //5!=5*4!
    //n!=n(n-1)!

    if(n>1)
    return n*fact(n-1);
    else 
    return 1;
    
}