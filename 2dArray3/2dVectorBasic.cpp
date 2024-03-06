#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
    v3.push_back(5);
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    
    vector <vector <int> >  v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[1][1]<<endl;
    cout<<v.size()<<endl;  // row size
    cout<<v[0].size()<<endl;  // col size
    cout<<v[1].size()<<endl;   // col size
    cout<<v[2].size()<<endl;   // col size
    return 0;
    // vector<int> nums;
    // nums.push_back(0);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(5);
    // int count = 0;
    // cout<<nums.size();
    //     int i;
    //     for(i = 0; i<nums.size()-1; i++){
    //         if( nums[i]!=nums[i+1]){
    //             nums[count] = nums[i];  
    //             count++;
    //         }
    //     }
    //     if(nums[i] != nums[i-1]){
    //         nums[count]= nums[i];
    //         count++;
    //         cout<<i<<endl;
    //     }
         
    //     cout<< count;
}