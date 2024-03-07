#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;       
int main(){   
    vector<int> nums= {3,30,34,5,9} ;
    string ans="";
    int n = nums.size();
    int max = nums[0];
    for(int i=0; i<n; i++){        
        if(nums[i]>max){
            if(nums[i]>9){
            int y = nums[i]/10;
            int x = nums[i]%10;
            ans+=y;
            ans+=x;
            }
            ans+=nums[i];
        }
    }
    cout<<ans;

}   