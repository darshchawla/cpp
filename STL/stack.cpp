#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "The stack is : ";

    stack<int> temp = s;   // Copy the stack

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout<<endl;
    cout<<endl;

    cout << "The size of the stack is : " << s.size() << endl;

    cout << endl;

    cout << "The value at the top is : ";

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    cout << endl;

    cout << "The new size of the stack is : " << s.size() << endl;
}