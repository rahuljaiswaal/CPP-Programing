#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"Note : matrix orders are must be same"<<endl<<"Enter the detail of matrix 1"<<endl;
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of coloumn : ";
    cin>>m;
    int arr1[n][m];
    // input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl<<"Enter the detail of matrix 1"<<endl;
    int a;
    cout<<"Enter the no of rows : ";
    cin>>a;
    int b;
    cout<<"Enter the no of coloumn : ";
    cin>>b;
    int arr2[a][b];
    // input
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr2[i][j];
        }
    }
    
    // method ---> 01

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<arr1[i][j]+arr2[i][j];
    //     }
    //  cout<<endl;
    // }

    // method --->02

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         arr2[i][j]=arr1[i][j]+arr2[i][j];
    //     }
    //    cout<<endl;
    // }

    // method --->03

    int res[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    cout<<"Addition of arr1 and arr2 is "<<endl;
    // out put
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}