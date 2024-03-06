#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case 
    cout<<n<<" "; // work
    print(n-1); // call
    
}
int main(){
    print(5);
    return 0;
}