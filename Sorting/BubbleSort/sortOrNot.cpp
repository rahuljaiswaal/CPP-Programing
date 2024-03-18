#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    bool flag;
    vector<int> v={1,2,3,4,6};
    int n = v.size();
    for(int i=0; i<n-1; i++){
        if(v[i]<v[i+1]) flag = true;
        else{
            flag = false;
            break;
        }
    }
    cout<<flag;
}