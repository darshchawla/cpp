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

void change(Car &c)
{
    c.name = "Mercedes-Benz";
    c.model = "S Class";
}

int main()
{
    Car c1;
    c1.name = "BMW";
    c1.model = "i7";
    c1.price = 25000000;
    c1.seats = 5;

    print(c1);
    change(c1);
    print(c1);
}