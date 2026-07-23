#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter number of lines : ";
    cin >> l;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l + 1 - i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}