#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int* ptr = &a;
    cout<<ptr<<endl;
    ptr = ptr +1;
    cout<<ptr<<endl;
}