#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int arr[n]; // declaration
    for (int i = 0; i <= n - 1; i++)
    {
        int a = i + 1;
        cout << endl;
        cout << "Enter element number " << a << ": ";
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
    cout << "Reversed Array is : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}