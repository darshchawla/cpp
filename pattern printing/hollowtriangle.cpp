#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;

    cout<<endl;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == r || j == 1 || j == i)
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