#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float p;
    cout << "Enter Principal : ";
    cin >> p;

    cout<<endl;

    float r;
    cout << "Enter Rate (%) : ";
    cin >> r;

    cout<<endl;

    float t;
    cout << "Enter Time (years) : ";
    cin >> t;

    cout<<endl;

    float a;
    a = p * pow((1 + r / 100), t);

    float CI;
    CI = a - p;

    cout << "Amount = " << a << endl;

    cout<<endl;

    cout << "Compound Interest = " << CI << endl;

    return 0;
}