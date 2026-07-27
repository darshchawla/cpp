#include <iostream>
using namespace std;
int main()
{
    float c;
    cout << "Enter temperature in Celsius : ";
    cin >> c;

    cout << endl;

    int f;
    f = (9.0 / 5.0 * c) + 32;
    cout << "Temperature in Fahrenheit is : " << f << endl;
}