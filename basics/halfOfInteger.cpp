#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    float y = (float)x / 2; // typecasting
    cout << "The half of the number is : ";
    cout << y << endl;
}