#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};

    v.push_back({4, 5});
    v.emplace_back(6, 7);

    for (pair<int, int> p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
}