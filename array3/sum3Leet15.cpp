#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxend = height[height.size()-1];
        int maxstart = INT_MIN;
        int idx;
        
        for(int i=0; i<n-2; i++){
            if(maxstart<height[i]){
                maxstart=height[i];
                idx = i;
            }
        }
        int mini=min(maxstart,maxend);
        int idxx=n-1 -idx;
        cout<<maxend<<" "<<maxstart<<" ";
        cout<<mini<<" "<<idxx<<" ";
        return (idxx*mini);

    }
};


int main(){
Solution s;
vector<int>num = {1,8,6,2,5,4,8,3,7};
vector<vector<int>>ans;
int ans1;
ans1 = s.maxArea(num);
cout<<ans1;
// for(int i = 0; i < ans.size(); i++){
//     for(int  j =0; j< ans[i].size(); j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }
    return 0;
}