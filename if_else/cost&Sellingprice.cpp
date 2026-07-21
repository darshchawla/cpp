#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter cost price : ₹";
    cin >> cp;
    int sp;
    cout << "Enter selling price : ₹";
    cin >> sp;
    if (sp > cp)
    {
        cout << "The seller has made profit of ₹" << sp - cp << endl;
    }
    else if (sp < cp)
    {
        cout << "The seller has incurred loss of ₹" << cp - sp << endl;
    }
    else
    {
        cout << "Neither profit nor loss." << endl;
    }
}