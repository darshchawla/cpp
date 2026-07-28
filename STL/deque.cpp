#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(5);
    d.push_back(7);
    d.push_front(2);
    d.push_front(3);

    cout << "The Deque is : ";
    for (int value : d)
    {
        cout << value << " ";
    }
    cout << endl;
}