#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3, 5, 1, 7, 8};

    cout << "The vector is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    cout << endl;

    // sort(v.begin(), v.end()); // sort(arr, arr + n);  Here n = 5  // Ascending Order Sorting

    sort(v.begin(), v.end(), greater<int>()); // Descending Order Sorting

    cout << "The vector after sorting is : ";
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}