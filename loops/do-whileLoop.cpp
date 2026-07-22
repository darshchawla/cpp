#include <iostream>
using namespace std;
int mai()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
}