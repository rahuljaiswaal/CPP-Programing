#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,4,6,19,77,88,112,366};
    int target = 88;  
    cout<<"array is : ";
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    int lo = 0;
    int hi = v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo) / 2;   // (lo+hi)/2
        if(v[mid]==target){
            cout<<v[mid-1]<<" is the lower bound for  target "<<target;
            break;
        }
        else if(v[mid]>target) hi=mid-1;
        else lo=mid+1;  // v[mid]<target
    }
}