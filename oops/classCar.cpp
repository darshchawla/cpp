#include <iostream>
using namespace std;
class Car // Car is a new data type.
{
public:
    string name;
    string model;
    long long price;
    int seats;
};
int main()
{
    Car c1;
    c1.name = "BMW";
    c1.model = "i7";
    c1.price = 25000000;
    c1.seats = 5;

    cout << "Name of the Car : " << c1.name << endl;
    cout << "Model of the Car : " << c1.model << endl;
    cout << "Price of the Car  : " << c1.price << endl;
    cout << "Number of Seats : " << c1.seats << endl;

    cout << endl;

    Car c2;
    c2.name = "Mercedes-Benz";
    c2.model = "S Class";
    c2.price = 23500000;
    c2.seats = 5;

    cout << "Name of the Car : " << c2.name << endl;
    cout << "Model of the Car : " << c2.model << endl;
    cout << "Price of the Car : " << c2.price << endl;
    cout << "Number of Seats : " << c2.seats << endl;
}