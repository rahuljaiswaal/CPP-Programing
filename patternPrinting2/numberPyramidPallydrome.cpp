#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        // spaces
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        // number triangle
        for(int k = 1; k<=i; k++){
            cout<<k;
        }
        // number triangle opposite
        for(int q = i-1; q>=1; q--){
            cout<<q;
        }
        cout<<endl;
    }
    return 0;
}