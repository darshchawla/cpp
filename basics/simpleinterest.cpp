#include <iostream>
using namespace std;
int main()
{
    float p;
    cout << "Enter principal : ";
    cin >> p;
    float r;
    cout << "Enter rate : ";
    cin >> r;
    float t;
    cout << "Enter time : ";
    cin >> t;
    float SI = (p * r * t) / 100;
    cout << "The Simple Interest is : ";
    cout << SI << endl;
}