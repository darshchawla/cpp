#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 5, 7};
    vector<int>::iterator itr;

    cout << "The vector is : ";
    for (itr = v.begin(); itr != v.end(); itr++) //     ]
    {                                            //     ] for printing forward vector
        cout << *(itr) << " ";                   //     ]
    }                                            //     ]

    cout << endl;
    cout << endl;

    // vector<int>::reverse_iterator it;
           
    cout << "The reverse vector is : ";
    for (auto itr = v.rbegin(); itr != v.rend(); itr++) //    ]
    {                                                   //    ] for printing backward vector
        cout << *(itr) << " ";                          //    ]
    }                                                   //    ]
    cout << endl;
}