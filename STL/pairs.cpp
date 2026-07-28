#include <iostream>
using namespace std;

int main()
{
    // pair<int, int> p = {5, 7};
    // pair<string, int> p = {"Darsh", 7};
    pair<int, pair<char, int>> p = {5, {'a', 7}}; // PAIR OF PAIRS

    cout << p.first << endl;
    cout << p.second.first << " " << p.second.second << endl;
}