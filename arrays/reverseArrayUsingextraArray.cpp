#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        int a = i + 1;
        cout << endl;
        cout << "Enter element number " << a << " : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "The array is : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    int brr[n];
    cout << "The copy of one array into another in the reverse is : ";

    for (int i = 0; i <= n - 1; i++)
    {
        int j = n - 1 - i;
        brr[i] = arr[j];
         cout << brr[i] << " ";
    }

    cout << endl;
}