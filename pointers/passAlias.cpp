#include <iostream>
using namespace std;
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main(){
    int a,b;
    cin>>a>>b;
    // int temp = a;
    // a = b;
    // b = temp;
    // a = a+b;
    // b = a-b;
    // a = a-b;
    swap(a,b);
    cout<<a<<" "<<b;
}