#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    // int x = fibo(n-1) + fibo(n-2);
    
    int l = fibo(n-1);
    int r = fibo(n-2);
    int x = l + r;
    return x;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);  //   0 1 1 2 3 5 8 13 21 34 55 89 144 233
}