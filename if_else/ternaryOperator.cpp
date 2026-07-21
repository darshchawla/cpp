#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // (condition) ? if true : if false;
    (n % 2 == 0) ? cout << "Even number." << endl : cout << "Odd number." << endl;
}