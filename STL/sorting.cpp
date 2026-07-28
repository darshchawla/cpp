#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 1, 7, 8};

    cout << "The array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    sort(arr, arr + 5); // sort(arr, arr + n);  Here n = 5  // Ascending Order Sorting

    sort(arr, arr + 5, greater<int>()); // Descending Order Sorting

    cout << "The array after sorting is : ";
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
}