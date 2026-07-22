#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The highest factor of th given number except itself is : ";
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i;
            break;
        }
    }
}