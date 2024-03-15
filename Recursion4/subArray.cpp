#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subArray(vector<int> ans,vector<int>& v, int n,int idx){
    if(n==idx){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subArray(ans,v,n,idx+1);
    if(ans.size()==0 || ans[ans.size()-1]==v[idx-1]){
        ans.push_back(v[idx]);
        subArray(ans,v,n,idx+1);
    }
    // else if(ans[ans.size()-1]==v[idx-1]){
    //     ans.push_back(v[idx]);
    //     subArray(ans,v,n,idx+1);
    // }
}
int main(){

    vector<int> v={1,2,3,4,5};
    int n = v.size();
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<=j; k++){
    //             cout<<v[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    
    vector<int> ans;
    subArray(ans,v,n,0);
}