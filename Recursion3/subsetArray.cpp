#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subset(vector<int> v,int n, int idx,vector<int> ans){
    if(n==idx){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(v,n,idx+1,ans);
    ans.push_back(v[idx]);
    subset(v,n,idx+1,ans);
}
int main(){
    vector<int> v={1,2,3,4,5};
    vector<int> ans;
    subset(v,v.size(),0,ans);

}