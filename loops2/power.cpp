#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number  : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    int power = 1;
    for(int i = 1; i<=b; i++){
        
        power = power*a;
        
    }
    cout<<power;
    return 0;
}