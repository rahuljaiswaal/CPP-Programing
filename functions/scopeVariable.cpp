#include <iostream>
using namespace std;
int a = 9;
void f(){
    cout<<a;
}
int main(){
    cout<<a+5<<endl;
    f();
    return 0;
}