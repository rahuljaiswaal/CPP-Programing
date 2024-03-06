#include <iostream>
using namespace std;
int main(){
    int n;
    for(int k = 1; k<=3; k++){
        cin>>n;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}