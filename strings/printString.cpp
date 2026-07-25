#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    cout << endl;
    int n = str.length();
    cout << "Your input was : ";
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
    cout << endl;
}