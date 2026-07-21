#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;
    if (a > 99 && a < 1000)
    {
        cout << "The given number is a three digit number." << endl;
    }
    else
    {
        cout << "The given number is not a three digit number." << endl;
    }
}