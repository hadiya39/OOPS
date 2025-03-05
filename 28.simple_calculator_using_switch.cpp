//input two integers and a character representing an operation(+,-,*,/) as input from user and use a switch statement to perform the appropriate operationand print the result
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
    switch(op)
    {
    case '+':
    cout<<"result:"<<a+b;
    break;
    case '-':
    cout<<"result:"<<a-b;
    break;
    case '*':
    cout<<"result:"<<a*b;
    break;
    case '/':
    cout<<"result:"<<(b!=0?a/b:0);
    break;
    default:
    cout<<"Invalid operator!";
    return 0;
    }
}