#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(97);
    v.push_back(84);
    v.push_back(35);
    v.push_back(7);
    v.push_back(75);

    cout<<"The vector is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}