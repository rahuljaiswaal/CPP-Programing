#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(1);
    int x = 3;
    
    int s = v.size();
    // for(int i = 0; i<s; i++){
    //     if(v[i]==x) idx=i;
    // }
    // cout<<idx;
    for(int i = s-1; i>=0; i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
    return 0;
}
