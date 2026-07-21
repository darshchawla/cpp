#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter Ram's age : ";
    cin >> r;
    int s;
    cout << "Enter Shyam's age : ";
    cin >> s;
    int a;
    cout << "Enter Ajay's age : ";
    cin >> a;
    if (r < s && r < a)
    {
        cout << "Ram is the youngest." << endl;
    }
    else if (s < r && s < a)
    {
        cout << "Shyam is the youngest." << endl;
    }
    else
    {
        cout << "Ajay is the youngest." << endl;
    }
}