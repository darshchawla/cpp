#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int product = 1;
    cout << "The product of the digits of the given number is : ";
    while (n != 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        product = product * lastDigit;
    }
    cout << product << endl;
}