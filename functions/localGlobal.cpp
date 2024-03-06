#include <iostream>
using namespace std;
int a = 9;
void f(){
    cout<<a<<endl;
}
int main(){
    cout<<a<<endl;
    int a = 3;
    cout<<a<<endl;
    f();
    return 0;
}