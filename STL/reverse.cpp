#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "The vector is : ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    cout << endl;

    reverse(v.begin(), v.end()); // Reversing full vector

    // reverse(v.begin() + 1, v.begin() + 3); // Reversing vector for some range

    cout << "The reverse vector is : ";

    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}