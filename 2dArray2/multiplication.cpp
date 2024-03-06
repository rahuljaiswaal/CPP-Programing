#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the no of coloumn of 2nd matrix : ";
    cin>>n;

    int p;
    cout<<"Enter the no of rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the no of coloumn of 2nd matrix : ";
    cin>>q;
    // input
    if(n==p){
        int arr[m][n];
        cout<<"Enter element of 1st matrix : ";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }      
        int brr[p][q];
        cout<<"Enter element of 2nd matrix : ";
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>brr[i][j];
            }
        }
        // resultant matrix
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j]=0;
                for(int k=0; k<p; k++){
                    // res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j];
                    res[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
        cout<<"Multiplication is "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{  // n!=p
        cout<<"The matrix is cannot be multiplied";
    }
    return 0;
}