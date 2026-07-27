#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "Enter percentage : ";
    cin >> p;

    cout<<endl;

    // passing criteria greater than 33 percentage
    if (p > 33)
    {
        cout << "The student is passed." << endl;
    }
    else
    {
        cout << "The student is failed." << endl;
    }
}