#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no of coloumn : ";
    cin>>n;
    int arr[m][n];
    // input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // out put
    cout<<"real matrix "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // spiral
    int minr=0, minc=0;
    int maxr=m-1, maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        // left
        for(int j=maxc; j>=minc; j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        // up
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
    return 0;
}



/*

int m = matrix.size();
        int n = matrix[0].size();
        int minr=0, minc=0;
        int maxr=m-1, maxc=n-1;
        int tne=n*m;
        int count = 0;
        vector<int> v;
        while(minr<=maxr && minc<=maxc){
            // right
            for(int j=minc; j<=maxc && count<tne; j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;
            //if(minr>maxr || minc>maxc) break;
            // down
            for(int i=minr; i<=maxr && count<tne; i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            //if(minr>maxr || minc>maxc) break;
            // left
            for(int j=maxc; j>=minc && count<tne; j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;
            //if(minr>maxr || minc>maxc) break;
            // up
            for(int i=maxr; i>=minr && count<tne; i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return v;

*/