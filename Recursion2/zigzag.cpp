#include <iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    // cout<<"pre : "<<n<<endl;
    cout<<n;
    pip(n-1);
    // cout<<"in : "<<n<<endl;
    cout<<n;
    pip(n-1);
    // cout<<"post : "<<n<<endl;
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    pip(n);  
}