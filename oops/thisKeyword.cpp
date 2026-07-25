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
};

int main()
{
    Cricketer c1("Virat Kohli", 562, 28359);
    
    cout << "Name of the Cricketer : " << c1.name << endl;
    cout << "Total Matches played by the Cricketer : " << c1.matches << endl;
    cout << "Total Runs scored by the Cricketer : " << c1.runs << endl;

    cout << endl;

    Cricketer c2("Rohit Sharma", 514, 20429);

    cout << "Name of the Cricketer : " << c2.name << endl;
    cout << "Total Matches played by the Cricketer : " << c2.matches << endl;
    cout << "Total Runs scored by the Cricketer : " << c2.runs << endl;

    cout << endl;
}