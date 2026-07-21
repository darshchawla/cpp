#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter marks : ";
    cin >> m;
    if (m >= 81 && m <= 100)
    {
        cout << "Very Good" << endl;
        ;
    }
    else if (m >= 61 && m <= 80)
    {
        cout << "Good" << endl;
    }
    else if (m >= 41 && m <= 60)
    {
        cout << "Average" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}