#include <iostream>
using namespace std;

int factorial(int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    cout << "The factorial of the number is : " << product << endl;
    
    return product;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    factorial(n);
}