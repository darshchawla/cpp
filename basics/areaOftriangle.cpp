#include <iostream>
using namespace std;

int main()
{
    float b;
    cout << "Enter Base of the triangle : ";
    cin >> b;

    cout << endl;

    float h;
    cout << "Enter Height of the triangle : ";
    cin >> h;

    cout << endl;

    float area;
    area = (1.0 / 2.0) * b * h;
    cout << "The area of the triangle is : " << area << endl;
}