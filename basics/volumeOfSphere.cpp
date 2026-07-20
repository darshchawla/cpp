#include <iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter radius of the sphere : ";
    cin>>r;
    float pi = 3.1415;
    float volume = (4.0 / 3.0) * pi * r * r * r;
    cout << "The Volume of the Sphere is : ";
    cout << volume << endl;
}