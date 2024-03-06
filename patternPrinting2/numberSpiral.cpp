#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the lines : ";
    cin>>n;
    for(int i = 1; i<=2*n-1; i++){
        
        for(int j = 1; j<=2*n-1; j++){
            int a = i;
            int b = j;
            if(a>n) a = 2*n-i;  // i + a = 2n     ---->  a = 2n - i
            if(b>n) b = 2*n-j;  // j + b = 2n     ---->  b = 2n - j
            int x = min(a,b);
            cout<<n-x+1;
        }
        cout<<endl;
    }
    return 0;
}