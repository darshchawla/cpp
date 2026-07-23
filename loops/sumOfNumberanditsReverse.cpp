#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum;
    int reverse = 0;
    int a = n;
    while (n != 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10;
        reverse = reverse + lastDigit;
        n = n / 10;
    }
    sum = a + reverse;
    cout << "The sum of a number and its reverse is : ";
    cout << sum;
}