#include <iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int r;
    cout << "Enter r : ";
    cin >> r;

    if (r > n)
    {
        cout << "Invalid input! r cannot be greater than n.";
    }
    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);

    int nCr = a / (b * c);

    cout << "The combination is : ";
    cout << nCr << endl;
}