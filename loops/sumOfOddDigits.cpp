#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    cout << "The number from 1 to 'n' is : ";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    int oddsum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddsum = oddsum + i;
        }
    }
    cout << "The sum of odd digits between 1 to 'n' is : " << oddsum << endl;
}