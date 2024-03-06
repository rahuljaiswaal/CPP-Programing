#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    
    // ###*
    // ##***
    // #*****
    // *******

    for(int i = 1; i<=n; i++){
        int a = 2*i-1;   // odd number of stars
        // spaces
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        // star
        for(int k = 1; k<=a; k++){
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}