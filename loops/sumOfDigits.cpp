#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    cout << "The sum of the digits of the given number is : ";
    while (n != 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        sum = sum + lastDigit;
    }
    cout << sum << endl;
}