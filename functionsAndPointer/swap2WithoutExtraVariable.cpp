#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;
    int b;
    cout << "Enter second number : ";
    cin >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swaping : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}