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

void print(Car c)
{
    cout << "Name of the Car : " << c.name << endl;
    cout << "Model of the Car : " << c.model << endl;
    cout << "Price of the Car : " << c.price << endl;
    cout << "Number of seats : " << c.seats << endl;

    cout << endl;
}

int main()
{
    Car c1;
    c1.name = "BMW";
    c1.model = "i7";
    c1.price = 25000000;
    c1.seats = 5;

    Car c2;
    c2.name = "Mercedes-Benz";
    c2.model = "S Class";
    c2.price = 23500000;
    c2.seats = 5;

    print(c1);
    print(c2);
}