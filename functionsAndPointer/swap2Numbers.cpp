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
    int temp = a;
    a = b;
    b = temp;
    cout << "After swaping : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}