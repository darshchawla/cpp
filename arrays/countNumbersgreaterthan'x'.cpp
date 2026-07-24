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
    int x;
    cout << "Enter a number : ";
    cin >> x;
    cout << endl;
    cout << "The total numbers greater than " << x << " are : ";
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (x < arr[i])
        {
            count++;
        }
    }
    cout << count;
    cout << endl;
}