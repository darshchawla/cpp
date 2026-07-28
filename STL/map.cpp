#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;

    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Mobile Phones"] = 50;
    m["Tablet"] = 120;
    m["Watch"] = 50;

    m.insert({"Camera", 70}); // or m.emplace

    for (auto p : m)
    {
        cout << p.first << " - " << p.second << endl;
    }
    cout<<endl;
}