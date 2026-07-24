#include <iostream>
using namespace std;
void change(int arr[])
{
    arr[0] = 5;
    arr[2] = 7;
}
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
    change(arr);
    cout << endl;
    cout << "Updated Array is : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}