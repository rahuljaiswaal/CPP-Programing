#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0] != 0){ 
            cout<< 0;
            // return;
        }
        if(nums[n-1] != n) {
            cout<< n;
            // return;
        }
        int ans;
        int lo=0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+ (hi-lo)/2;
            if(nums[mid]==mid) lo=mid+1;
            else{
                ans=mid;
                hi=mid-1;
            }
        }
        cout<< ans;
}