#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort01(vector<int>& v, int n){
    int no0 = 0;
    int no1 = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==0) no0++;
        else no1++;
    }
    // feeling the elements
    for(int i = 0; i<n; i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    int n = v.size();
    cout<<"Current array is : ";
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v,n);
    cout<<"After sorted array is : ";
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
