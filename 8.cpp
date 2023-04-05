// 8. Write a C++ program to swap values of two int variables without using third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Before Swap values of a="<<a<<" and "<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap values of a="<<a<<" and "<<"b="<<b;
    return 0;   
}