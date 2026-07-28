#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // vector<int> v = {1, 7, 5, 3, 9, 15};

    v.push_back(1);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    v.emplace_back(15);

    // vector<int> v(7, 10);  size = 7; value at each index = 10;

    // cout << "The vector is : ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    cout << "The vector is : ";
    for (int value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the vector is : " << v.size() << endl;

    cout << endl;

    cout << "The capacity of the vector is : " << v.capacity() << endl;

    cout << endl;

    v.pop_back();

    cout << "The new vector is : ";
    for (int value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the new vector is : " << v.size() << endl;

    cout << endl;

    cout << "The capacity of the vector is : " << v.capacity() << endl;

    cout << endl;

    v.erase(v.begin() + 3);

    // v.erase(v.begin() + 1, v.begin() + 3);

    cout << "The new vector after erasing an element is : ";
    for (int value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    v.insert(v.begin() + 2, 4); // position = 3;  value = 4;

    cout << "The new vector after inserting a value is : ";
    for (int value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the vector after erasing an element is : " << v.size() << endl;

    cout << endl;

    cout << "The capacity of the vector is : " << v.capacity() << endl;

    cout << endl;

    v.clear();

    for (int value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the vector after clearing is : " << v.size() << endl;

    cout << endl;

    cout << "The capacity of the vector is : " << v.capacity() << endl;

    cout << endl;

    // v[1] = v.at(1);

    cout << "The value at index 1 is : " << v[1] << endl;

    cout << endl;

    cout << "The first element of the vector is : " << v.front() << endl;

    cout << endl;

    cout << "The last elements of the vector is : " << v.back() << endl;
}