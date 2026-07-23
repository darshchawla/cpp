#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int evenSum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        if (lastDigit % 2 == 0)
        {
            evenSum = evenSum + lastDigit;
        }
        n = n / 10;
    }
    cout << "The sum of the even digits of the given number is : ";
    cout << evenSum << endl;
}