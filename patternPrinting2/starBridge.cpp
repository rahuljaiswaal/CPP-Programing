#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the lines : ";
    cin>>n;
    for(int i = 1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i = 1; i<=m; i++){
        //star
        for(int j = 1; j<=m+1-i; j++){
            cout<<"*";
        }
        for(int k = 1; k<=nsp; k++){
            cout<<" ";
        }
        nsp+=2;
        //star
        for(int j = 1; j<=m+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}