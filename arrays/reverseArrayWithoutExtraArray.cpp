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

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "The reverse of the array is : ";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}