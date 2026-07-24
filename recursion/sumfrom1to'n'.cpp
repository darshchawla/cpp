#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;
    int s = n + sum(n - 1);
    return s;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The sum from 1 to given number 'n' is : ";
    cout << sum(n) << endl;
}