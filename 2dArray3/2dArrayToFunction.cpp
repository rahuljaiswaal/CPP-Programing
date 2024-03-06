#include <iostream>
#include <vector>
using namespace std;
void change(int arr[3][3]){  // give the size of 2d array  in another function must be compulsory
    arr[0][0] = 18;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change(arr);
    cout<<arr[0][0]<<endl;

    return 0;
}


/**
 
 leet code pascal trianle 2

 vector <vector<int> > res;
        vector<int> v;
        int s = v.size();
        // for(int i = 0; i<numRows; i++){
            
        // }
        for(int i=0; i<=rowIndex; i++){
            v.clear();
            // vector<int> v(i);
            // res.push_back(v);
            for(int j=0; j<=i; j++){
                if(j==0 || i==j) v.push_back(1);
                else v.push_back(res[i-1][j]+res[i-1][j-1]);
            }
            res.push_back(v);
        }
        for(int i =0; i<rowIndex; i++){
            v[i]=res[rowIndex][i];
        } 
        return v;


*/