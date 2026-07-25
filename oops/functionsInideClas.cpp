#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int matches;
    int runs;

    Cricketer(string name, int matches, int runs)
    {
        this->name = name;
        this->matches = matches;
        this->runs = runs;
    }

    void print()
    {

        cout << "Name of the Cricketer : " << this->name << endl;
        cout << "Total Matches played by the Cricketer : " << this->matches << endl;
        cout << "Total Runs scored by the Cricketer : " << this->runs << endl;

        cout << endl;
    }

    int average()
    {
        int a = runs / matches;
        return a;
    }
};

int main()
{
    Cricketer c1("Virat Kohli", 562, 28359);

    Cricketer c2("Rohit Sharma", 514, 20429);

    c1.print();
    c2.print();

    cout << "Average of Virat Kohli : " << c1.average() << endl;
    cout << "Average of Rohit Sharma : " << c2.average() << endl;
}