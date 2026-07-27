#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter an integer : ";
    cin >> i;

    cout << endl;

    if (i > 0)
    {
        cout << "The number is positive." << endl;
    }
    else if (i < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is neither positive nor negative. The number is 0." << endl;
    }
}