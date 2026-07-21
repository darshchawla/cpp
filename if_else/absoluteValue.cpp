#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter an integer : ";
    cin >> a;
    if (a >= 0)
    {
        cout << "The absolute value of the given number is : ";
        cout << a << endl;
    }
    else
    {
        int b = a * (-1);
        cout << "The absolute value of the given number is : ";
        cout << b << endl;
    }
}