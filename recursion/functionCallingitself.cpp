#include <iostream>
using namespace std;
void greet(){
    cout<<"Good Morning!!";
    greet();
}
int main (){
    greet();
}