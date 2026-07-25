#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int a = i + 1;
        cout << "Enter element " << a << " : ";
        cin >> arr[i];
        cout << endl;
    }

    int max = INT_MIN;

    // Find maximum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int secondmax = INT_MIN;

    // Find second maximum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && arr[i] > secondmax)
        {
            secondmax = arr[i];
        }
    }

    cout << endl;

    if (secondmax == INT_MIN)
        cout << "Second largest element does not exist." << endl;
    else
        cout << "Second largest element is : " << secondmax << endl;

    return 0;
}