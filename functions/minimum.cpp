#include <iostream>
#include <cmath>
using namespace std;
int mini(int x, int y){
    int a;
    if(x>y) a=y;
    else a=x;
    return a;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<mini(x,y)<<endl;
    cout<<sqrt(9);
    return 0;
}