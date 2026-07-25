#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    cout << endl;
    cout << "The length of the string is : ";
    cout << str.length() << endl;
}