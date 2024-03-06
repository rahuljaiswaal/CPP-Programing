#include <iostream>
using namespace std;
// int product(int a,int b){
//     return a*b;
// }
void fun(int n){
    if(n==0) return;
    cout<<"hello fun"<<endl;
    fun(n-1);
}
void wow(int n){
    if(n==0) return;
    cout<<"good morning"<<endl;
    wow(n-1);
}
int main(){
    // cout<<product(3,5);
    fun(5);
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    wow(n);
    return 0;
}