// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers = ";
    cin>>a>>b;
    if(a == b)
        cout<<"a and b are equal";
    else if (a > b)
    {
        cout<<"Maximum = "<<a;
    }

    else
        cout<<"Maximum = "<<b;

    return 0;
    
}