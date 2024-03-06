#include <iostream>
using namespace std;
int main(){
    // int x = 2;
    // int* p1 = &x; //int *p
    // int y = 8;
    // int* p2 = &y;
    // cout<<*p1+*p2;
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter the 1st number : ";
    cin>>*p1;
    cout<<"Enter the 2nd number : ";
    cin>>*p2;
    cout<<*p1 + *p2<<endl;
    cout<<x + y;
    return 0;
}