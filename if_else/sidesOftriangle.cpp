#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first side : ";
    cin >> a;
    int b;
    cout << "Enter second side : ";
    cin >> b;
    int c;
    cout << "Enter third side : ";
    cin >> c;
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << "The given three sides form a valid triangle." << endl;
    }
    else
    {
        cout << "The given three sides do not form a valid triangle." << endl;
    }
}