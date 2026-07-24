#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    int p = a * power(a, b - 1);
    return p;
}

int main()
{
    int a;
    cout << "Enter base : ";
    cin >> a;

    int b;
    cout << "Enter power : ";
    cin >> b;

    cout << a << " raised to the power " << b << " is : ";
    cout << power(a, b) << endl;
}