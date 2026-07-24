#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        int a = i + 1;
        cout << endl;
        cout << "Enter element number " << a << " : ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "The array is : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout<<"The new array is : ";
    for (int i = 0; i <= n - 1; i++)
    {
       if(i%2!=0){
            arr[i]=arr[i]*2; 
       }
       else{
             arr[i]=arr[i]+10; 
       }
       cout<<arr[i]<<" ";
    }
    cout << endl;
}