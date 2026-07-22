#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // 3 12 48 192 768
    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 4;
    }
}