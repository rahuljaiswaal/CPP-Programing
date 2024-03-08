#include <iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    if(n==0) return 1;
    int ans = pow(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    if(n%2==1){
        return ans*ans*x;
    }

    return 0;
    
}
int main(){
    int x = 2;
    int n = 5;
    cout<<pow(x,n);
}