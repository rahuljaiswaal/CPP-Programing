#include <iostream>
using namespace std;
int gcd(int a, int b){
    for(int i=min(a,b); i>=2; i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int gcd2(int a, int b){
    if(a==0) return b;
    else return gcd2(b%a,a);
}
int main(){
    int a=24;
    int b=60;
    int x = gcd(a,b);
    cout<<x<<endl;
    int y = gcd2(a,b);
    cout<<y<<endl;
}