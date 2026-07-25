#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    cout << endl;
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    cout << "The number of vowels in the string are : ";
    cout << count << endl;
}