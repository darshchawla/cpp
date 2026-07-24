#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;
    
    cout << endl;

    int c;
    cout << "Enter number of columns : ";
    cin >> c;

    cout << endl;

    int arr[r][c];

    cout << "Enter elements : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}