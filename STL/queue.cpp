#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "The queue is : ";

    queue<int> temp = q; // Copy the queue

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;
    cout << endl;

    cout << "The size of the queue is : " << q.size() << endl;

    cout << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << endl;

    cout << "The size of the queue after popping is : " << q.size() << endl;
}