#include <iostream>
#include <vector>
using namespace std;
int main(){

   
        vector<int> nums = {4,3,-1,1};
        int i = 0;
        int n = nums.size();
        while(i<n){
            if(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!= nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
            else i++;
        }
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            if(nums[i]!= i+1){
                cout<< i+1;
            }
        }
        cout<< n+1;
        }  