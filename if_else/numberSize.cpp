#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    if (n > 0 && n < 10)
        cout << "The given number is single-digit number." << endl;

    else if (n > 9 && n < 100)
        cout << "The given number is two-digit number." << endl;

    else if (n > 99 && n < 1000)
        cout << "The given number is three-digit number." << endl;

    else if (n > 999 && n < 10000)
        cout << "The given number is four_ digit number.";

    else
        cout << "The given number is not a two-digit, three-digit, and four-digit number." << endl;
}