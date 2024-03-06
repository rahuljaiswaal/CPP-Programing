#include <iostream>
using namespace std;
void greeting(){
    cout<<"good morning"<<endl;
    cout<<"have a nice day "<<endl;
}
void starTriangle(int x){
    for(int i = 1; i<=x; i++){
            for(int j = 1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
}
int main(){
    greeting();
    starTriangle(3);
    greeting();
    starTriangle(4);
    greeting();
    starTriangle(5);
    return 0;
}