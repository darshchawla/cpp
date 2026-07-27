#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;

    cout << endl;

    int b;
    cout << "Enter second number : ";
    cin >> b;

    cout << endl;

    int c;
    cout << "Enter third number : ";
    cin >> c;

    cout << endl;

    float average;
    average = (a + b + c) / 3.0;
    cout << "The average of three numbers is : " << average << endl;
}