#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of coloumn : ";
    cin>>m;
    int arr[n][m];
    // input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    // out put
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
        
    }
    cout<<"maximum no is : "<<max;
    return 0;
}