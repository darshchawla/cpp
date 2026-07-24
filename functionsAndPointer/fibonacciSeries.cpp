#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int f = fibonacci(n - 1) + fibonacci(n - 2);
    return f;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The fibonacci number is : ";
    cout << fibonacci(n) << endl;
}