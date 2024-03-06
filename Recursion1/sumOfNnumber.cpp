#include<iostream>
using namespace std;
void AfterCall(int n){
    if(n==0) return; // base case     
    AfterCall(n-1); // call
    cout<<n<<" "; // work
}
void sum1ToN(int sum,int n){
    if(n==0) {
        cout<<sum<<endl;
        return;
    }    
    sum1ToN(sum+n,n-1); // call
}
int add(int n){
    if(n==0) return 0;
    int sum = n+add(n-1);
    return sum;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Number from 1 to n is : ";
    AfterCall(n);
    cout<<endl<<"sum is : ";
    sum1ToN(0,n);
    cout<<endl;
    cout<<"sum is(through return type) 5: "<<add(n);
    return 0;
}