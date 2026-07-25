#include <iostream>
using namespace std;
class Student // Student is a new data type.
{
public:
    string name;
    int age;
    int rollnumber;
    float cgpa;

    Student() // Default Constructor
    {

    }

    Student(string s, int a, int r, float c) // Parameterised Constructor
    {
        name = s;
        age = a;
        rollnumber = r;
        cgpa = c;
    }
};
int main()
{
    Student s1("Darsh", 17, 75, 9.1);

    cout << "Name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;
    cout << "Roll Number : " << s1.rollnumber << endl;
    cout << "CGPA : " << s1.cgpa << endl;

    Student s2;
    s2.name = "Varun";
    s2.age = 18;
    s2.rollnumber = 15164738;
    s2.cgpa = 8.9;

    cout << "Name : " << s2.name << endl;
    cout << "Age : " << s2.age << endl;
    cout << "Roll Number : " << s2.rollnumber << endl;
    cout << "CGPA : " << s2.cgpa << endl;
}