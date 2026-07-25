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

    Student(string s, int a, int r) // Parameterised Constructor
    {
        name = s;
        age = a;
        rollnumber = r;
    }

    Student(string s, int a, int r, float c) // Parameterised Constructor
    {
        name = s;
        age = a;
        rollnumber = r;
        cgpa = c;
    }

    Student(int r, float c, int a, string s) // Parameterised Constructor
    {
        name = s;
        age = a;
        rollnumber = r;
        cgpa = c;
    }

    Student(int r) // Parameterised Constructor
    {
        rollnumber = r;
    }
};

int main()
{
    Student s1("Darsh", 17, 75);
    s1.cgpa = 9.7;

    cout << endl;

    cout << "Name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;
    cout << "Roll Number : " << s1.rollnumber << endl;
    cout << "CGPA : " << s1.cgpa << endl;

    cout << endl;

    Student s2;
    s2.name = "Varun";
    s2.age = 18;
    s2.rollnumber = 57;
    s2.cgpa = 8.9;

    cout << "Name : " << s2.name << endl;
    cout << "Age : " << s2.age << endl;
    cout << "Roll Number : " << s2.rollnumber << endl;
    cout << "CGPA : " << s2.cgpa << endl;

    cout << endl;

    Student s3("Aryan", 17, 94, 9.0);

    cout << "Name : " << s3.name << endl;
    cout << "Age : " << s3.age << endl;
    cout << "Roll Number : " << s3.rollnumber << endl;
    cout << "CGPA : " << s3.cgpa << endl;

    cout << endl;

    Student s4(34, 9.2, 18, "Harish");

    cout << "Name : " << s4.name << endl;
    cout << "Age : " << s4.age << endl;
    cout << "Roll Number : " << s4.rollnumber << endl;
    cout << "CGPA : " << s4.cgpa << endl;

    cout << endl;

    Student s5(97);
    s5.name = "Naman";
    s5.age = 18;
    s5.cgpa = 9.4;

    cout << "Name : " << s5.name << endl;
    cout << "Age : " << s5.age << endl;
    cout << "Roll Number : " << s5.rollnumber << endl;
    cout << "CGPA : " << s5.cgpa << endl;

    cout << endl;

    Student s6 = s1; // Deep Copy
    s6.name = "Manish";

    cout << "Name : " << s6.name << endl;
    cout << "Age : " << s6.age << endl;
    cout << "Roll Number : " << s6.rollnumber << endl;
    cout << "CGPA : " << s6.cgpa << endl;

    cout << endl;

    Student s7(s1); // Copy Constructor --> Deep Copy
    s7.name = "Prateek";

    cout << "Name : " << s7.name << endl;
    cout << "Age : " << s7.age << endl;
    cout << "Roll Number : " << s7.rollnumber << endl;
    cout << "CGPA : " << s7.cgpa << endl;
}