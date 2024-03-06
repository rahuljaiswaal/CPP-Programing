#include <iostream>
#include <vector>
using  namespace std;
void minimumTotal(vector<vector<int>>& triangle) {

        int m = triangle.size();
        int sum = 0;
       
        for(int i=0; i<m; i++){
            int min = INT_MAX;
            int n = triangle[i].size();
            for(int j=0; j<n; j++){
                if(triangle[i][j]<min) {
                min=triangle[i][j];
                cout<<min<<endl;
                }

            }
            cout<<min<<" is "<<endl;
            sum+=min;
        }
        cout<<"sum is : "<< sum;
        
    }
int main(){
    vector<vector<int>> triangle= {{2},{3,4},{6,5,7},{4,1,8,3}};
    minimumTotal(triangle);
}