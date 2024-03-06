#include <iostream>
using namespace std;
void fun(int x = 3, int y = 1){ // default values
    cout<<x<<" "<<y<<endl;
}
void ram(int x = 3, int y = 1){
    cout<<x<<" "<<y;
}
int main(){
    fun();
    ram(4,6);
    return 0;
}