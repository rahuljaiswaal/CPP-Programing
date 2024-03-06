#include<iostream>
using namespace std;

int power(int n, int m){
    if(m==0) return 1;
    int ans = n*power(n,m-1);
    return ans;
}
int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<endl;
    cout<<"a to power b is : "<<power(a,b);
    return 0;
}