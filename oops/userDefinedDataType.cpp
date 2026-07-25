#include <iostream>
using namespace std;
class Student
{ // Student is a new data type.
public:
    string name;
    int age;
    int rollnumber;
    float cgpa;
};
int main()
{
    Student s1;
    s1.name = "Darsh";
    s1.age = 17;
    s1.rollnumber = 15162835;
    s1.cgpa = 9.1;

    cout << "Name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;
    cout << "Roll Number : " << s1.rollnumber << endl;
    cout << "CGPA : " << s1.cgpa << endl;

    cout << endl;

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