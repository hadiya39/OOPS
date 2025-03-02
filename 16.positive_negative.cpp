//input integer from user and checkif it is posiive negative or zero using if else
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter an integer";
    cin>>x;
    if(x<0)
    {
        cout<<"integer is negative";
    }
    else if(x>0)
    {
        cout<<"integer is ppositive";

    }
    else
    cout<<"zero";
    return 0;
}