#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subset(vector<int> v,int n, int idx,vector<int> ans,int k){
    if(n==idx){
        if(ans.size()==k){
            for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-1)<k) return;
    subset(v,n,idx+1,ans,k);
    ans.push_back(v[idx]);
    subset(v,n,idx+1,ans,k);
}
int main(){
    vector<int> v={1,2,3,4,5};
    vector<int> ans;
    int k = 3;
    subset(v,v.size(),0,ans,k);

}