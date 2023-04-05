//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float average;
    cout<<"Enter three numbers = ";
    cin>>a>>b>>c;
    average=(a+b+c)/3;
    cout<<"The average of a,b and c is "<<average;
    return 0;
}