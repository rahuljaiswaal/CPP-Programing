#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the no of lines (only odd number) : ";
    cin>>n;
    int mid = n/2 +1;   // star printed only middle of rows and columns
    for(int i = 1; i<=n; i++){
        for(int j =  1; j<=n; j++){
            if(j==mid || i==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}