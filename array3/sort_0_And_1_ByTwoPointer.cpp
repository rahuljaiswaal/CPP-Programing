#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort01m2(vector<int>& v, int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            // int temp = v[i];
            // v[i]=v[j];
            // v[j]=temp;
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
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
    sort01m2(v,n);
    cout<<"After sorted array is : ";
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
