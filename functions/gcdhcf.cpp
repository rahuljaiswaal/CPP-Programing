#include <iostream>
using namespace std;
int hcf1 = 1;
void fun(int x, int y){
    for(int i = min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            hcf1 = i;
            cout<<i;
            break;
        }
        
    }
}
int main(){
    int a;
    cout<<"Enter the 1st number : ";
    cin>>a;
    int b;
    cout<<"Enter the 2st number : ";
    cin>>b;
    fun(a,b);
    return 0;
}