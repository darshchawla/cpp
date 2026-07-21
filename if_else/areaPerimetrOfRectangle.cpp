#include <iostream>
using namespace std;
int main()
{
    float l;
    cout << "Enter length : ";
    cin >> l;
    float b;
    cout << "Enter breadth : ";
    cin >> b;
    float perimeter = 2 * (l + b);
    float area = l * b;
    if (area > perimeter)
    {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    }
    else
    {
        cout << "The area of the rectangle is smaller than its perimeter." << endl;
    }
}