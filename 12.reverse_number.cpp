// to reverse a number
#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"enter a natural number: ";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }
    return 1;
}