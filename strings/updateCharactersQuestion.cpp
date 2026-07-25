#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            str[i] = 'a';
        }
    }

    cout << str << endl;
}