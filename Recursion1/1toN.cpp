#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    cout<<i<<" "; 
    print(i+1,n);
    
}
void AfterCall(int n){
    if(n==0) return; // base case     
    AfterCall(n-1); // call
    cout<<n<<" "; // work
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    print(1,n);
    cout<<endl;
    AfterCall(n);
    return 0;
}