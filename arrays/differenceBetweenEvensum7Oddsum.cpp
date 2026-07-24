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

    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        if (i % 2 == 0)
        {
            evensum = evensum + arr[i];
        }
        else
        {
            oddsum = oddsum + arr[i];
        }
    }

    cout << "Sum of even elements in the array is : ";
    cout << evensum << endl;

    cout << endl;

    cout << "Sum of odd elements in the array is : ";
    cout << oddsum << endl;

    cout << endl;

    int difference = evensum - oddsum;
    cout << "The difference between the sum of elements at even indices to the sum of elements at odd indices : ";
    cout << difference << endl;
}