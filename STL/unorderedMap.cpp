#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;

    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Mobile Phones"] = 50;
    m["Tablet"] = 120;
    m["Watch"] = 50;

    for (auto p : m)
    {
        cout << p.first << " - " << p.second << endl;
    }
    cout << endl;
}