#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth fibbonaci number : ";
    cin>>n;
    int a = 0;
    int b = 1;
    int sum;
    for(int i = 1; i<=n; i++){
        cout<<a<<" ";
        sum = a+b;
        a = b;
        b = sum;
        
    }
    return 0;
}