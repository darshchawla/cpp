#include <iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n, r;

    cout << "Enter n : ";
    cin >> n;

    cout << "Enter r : ";
    cin >> r;

    if (r > n)
    {
        cout << "Invalid input! r cannot be greater than n.";
    }

    int a = fact(n);
    int b = fact(n - r);

    int nPr = a / b;

    cout << "The permutation is : " << nPr << endl;
}