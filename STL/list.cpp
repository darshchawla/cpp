#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    l.push_back(7);

    cout << "The list is : ";
    for (int value : l)
    {
        cout << value << " ";
    }
    cout << endl;
}