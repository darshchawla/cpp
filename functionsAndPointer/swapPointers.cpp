#include <iostream>
using namespace std;
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;
    int b;
    cout << "Enter second number : ";
    cin >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "After swaping : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}