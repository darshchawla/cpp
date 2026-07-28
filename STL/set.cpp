#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for (auto value : s)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the set is : " << s.size() << endl;
}