#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "Enter radius of the circle : ";
    cin >> r;
    float pi = 3.1415;
    float area = pi * r * r;
    cout << "The area of the circle is : ";
    cout << area << endl;
}