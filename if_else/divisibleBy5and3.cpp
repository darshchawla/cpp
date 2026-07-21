#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "The given number is divisible by both 5 and 3." << endl;
    }
    else
    {
        cout << "The given number is not divisible by 5 and 3" << endl;
    }
}