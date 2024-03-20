#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,4,6,19,77,88,112,366};
    int target = 82;  
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
            cout<<v[mid-1]<<" is the lower bound for  target "<<target;
            flag = true;
            break;
        }
        else if(v[mid]>target) hi=mid-1;
        else lo=mid+1;  // v[mid]<target
    }
    if(flag==false) cout<<v[hi]<<" is the lower bound for  target "<<target;
}