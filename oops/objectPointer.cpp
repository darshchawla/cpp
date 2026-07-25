#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int matches;
    int runs;
    float average;

    Cricketer(string name, int matches, int runs, float average)
    {
        this->name = name;
        this->matches = matches;
        this->runs = runs;
        this->average = average;
    }
};

void change1(Cricketer* c)
{
    c->average = 75.7; // (*c).average=75.7;
}

void change2(Cricketer* c)
{
    c->average = 68.9;
}

int main()
{

    Cricketer c1("Virat Kohli", 562, 28359, 55.2);

    cout << "Name of the Cricketer : " << (c1).name << endl;
    cout << "Total Matches played by the Cricketer : " << (c1).matches << endl;
    cout << "Total Runs scored by the Cricketer : " << (c1).runs << endl;
    cout << "The Average of the Cricketer is : " << (c1).average << endl;

    change1(&c1);
    cout << endl;

    cout << "Name of the Cricketer : " << (c1).name << endl;
    cout << "Total Matches played by the Cricketer : " << (c1).matches << endl;
    cout << "Total Runs scored by the Cricketer : " << (c1).runs << endl;
    cout << "The Average of the Cricketer is : " << (c1).average << endl;

    cout << endl;

    Cricketer c2("Rohit Sharma", 514, 20429, 47.8);

    cout << "Name of the Cricketer : " << (c2).name << endl;
    cout << "Total Matches played by the Cricketer : " << (c2).matches << endl;
    cout << "Total Runs scored by the Cricketer : " << (c2).runs << endl;
    cout << "The Average of the Cricketer is : " << (c2).average << endl;

    change2(&c2);
    cout << endl;

    cout << "Name of the Cricketer : " << (c2).name << endl;
    cout << "Total Matches played by the Cricketer : " << (c2).matches << endl;
    cout << "Total Runs scored by the Cricketer : " << (c2).runs << endl;
    cout << "The Average of the Cricketer is : " << (c2).average << endl;
}