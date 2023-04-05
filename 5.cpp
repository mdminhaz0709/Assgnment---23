//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;

int main()
{
    int volume, length, width, height;
    cout<<"Enter the length,width and height of a Cuboid =";
    cin>>length>>width>>height;
    volume=length*width*height;
    cout<<"Volume of a cuboid = "<<volume;
    return 0;
    
}
