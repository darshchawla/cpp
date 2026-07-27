#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first side : ";
    cin >> a;

    cout << endl;

    int b;
    cout << "Enter second side : ";
    cin >> b;

    cout << endl;

    int c;
    cout << "Enter third side : ";
    cin >> c;

    cout << endl;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Not a valid triangle." << endl;
    }

    else if (a == b && b == c && a == c)
    {
        cout << "Equilateral Triangle." << endl;
    }
    else if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b))
    {
        cout << "Isosceles Triangle." << endl;
    }
    else
    {
        cout << "Scalene Triangle" << endl;
    }
}