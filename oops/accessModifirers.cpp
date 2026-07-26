#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollnumber;
    Student()
    {
    }
    Student(string name, int rollnumber, float marks)
    {
        this->name = name;
        this->rollnumber = rollnumber;
        this->marks = marks;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollnumber << endl;
        cout << "Marks : " << marks << endl;
    }

private:
    float marks;
};
int main()
{
    Student s1("Darsh Chawla.", 75, 95.7);

    s1.display();
}