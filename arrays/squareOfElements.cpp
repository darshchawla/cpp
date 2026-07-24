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
    cout << "The array of square of all the natural numbers is : ";
    int square;
    for (int i = 0; i <= n - 1; i++)
    {
        square = arr[i] * arr[i];
        cout << square << " ";
    }
    cout << endl;
}