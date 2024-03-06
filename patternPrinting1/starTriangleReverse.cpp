#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the no of lines : ";
    cin>>n;
    // no of star + no of rows(i) = n + 1
    // no of star = n + 1 - i
    for(int i = 1; i<=n; i++){
        for(int j =  1; j<=n+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}