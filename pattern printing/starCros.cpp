#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == j || i + j - 1 == r)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}