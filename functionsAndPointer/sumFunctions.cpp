#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum = a + b;
    cout << "The sum of both the numbers is : ";
    cout << sum << endl;
    return sum;
}
int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;
    int b;
    cout << "Enter second number : ";
    cin >> b;
    sum(a, b);
}