//create a program that takes two integer inputs and an arithmetic operator (+,-,*,/)from user then perform the corresponding operation. use if else 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter the two integers\n";
    cin>>a>>b;
    cout<<"enter the operator (+,-,*,/):\n";
    cin>>op;
    if(op=='+')
    cout<<"result:"<<a+b;
    else if(op=='-')
    cout<<"result:"<<a-b;
    else if(op=='*')
    cout<<"result:"<<a*b;
    else if(op=='/')
    cout<<"result:"<<(b!=0?a/b:0);
    else
    cout<<"Invalid operator!";
    return 0;

}