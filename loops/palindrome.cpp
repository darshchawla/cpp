#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int a = n;

    int reverse = 0;
    ;

    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << "The reverse of the number is : " << reverse << endl;

    cout << endl;

    if (a == reverse)
    {
        cout << "Palindrome number." << endl;
    }
    else
    {
        cout << "Not a Palindrome number." << endl;
    }
}