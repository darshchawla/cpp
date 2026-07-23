#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter number of lines : ";
    cin >> l;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << (char)(j + 64) << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}