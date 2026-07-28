#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    cout << "The vector of pairs is : " << endl;

    for (pair<int, int> p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    sort(v.begin(), v.end()); // sort(arr, arr + n);  Here n = 5  // Ascending Order Sorting

    // sort(v.begin(), v.end(), greater<int>()); // Descending Order Sorting

    cout << "The vector after sorting is : " << endl;

    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
}