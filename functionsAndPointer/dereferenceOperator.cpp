#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int* ptr = &a;
    cout << a << endl;
    *ptr = 7; // a = 7
    cout << a << endl;
}