#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int start=0, end=nums.size()-1;
        int i = 0;
        int j=end-1;
        // int sum=0;
        while(start<end){
            i = start+1;
            j = end-1;
            while(i<j){
            int sum = nums[i] + nums[j] + nums[start] + nums[end];
            cout<<sum<<' ';
                if(sum==target){
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[end]);
                    temp.push_back(nums[start]);
                    ans.push_back(temp);
                    i++;
                    j--;
                    while(nums[i]==nums[i+1] && nums[i]==nums[i+2]){ i++;}
                    while(nums[j]==nums[j-1] && nums[j]==nums[j-2]) {j--;}
                }
                else if(sum<target) 
                    i++;
                else{
                  j--;}

                //   sum = nums[i] + nums[j] + nums[start] + nums[end];
            }
            start++;
            end--;   
        }
        return ans;
    }


int main(){
    int target = 0;
    vector<int> nums={-3,-1,0,2,4,5};
    vector<vector<int>> v=fourSum(nums,target);
    for(int i=0; i<v.size(); i++){
        for(int j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
    }
}     