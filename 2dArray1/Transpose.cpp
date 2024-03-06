#include <iostream>
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
    cout<<"Real matrix is "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix is (in same matrix) "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    // store transpose
    int t[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            t[i][j]=arr[j][i];
        }
    }

    cout<<"Transpose of matrix is (in another matrix) "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}