#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;
    int a = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}