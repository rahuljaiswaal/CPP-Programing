#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,2};
    int target = 2;  // present
    // int target = 11;       // not  present
    cout<<"array is : ";
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    int lo = 0;
    int hi = v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo) / 2;   // (lo+hi)/2
        if(v[mid]==target){
            if(v[mid+1]==target) lo=mid+1;
            
            else{
                cout<<"Element "<<target<<" first index is : "<<mid;
                flag = true;
                break;
            }
        }
        else if(v[mid]>target) hi=mid-1;
        else lo=mid+1;  // v[mid]<target
    }
    if(flag==false) cout<<target<<" is not preseennt in the array";
}