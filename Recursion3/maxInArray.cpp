#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Display2(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    Display2(v,idx+1);
}
void Maximum(vector<int>& v,int idx, int max){
    if(idx==v.size()) {
        cout<<max<<endl;
        return;
    }
    if(v[idx]>max) max=v[idx];
    Maximum(v,idx+1,max);
}
int Maximum2(vector<int>& v,int idx){
    if(idx==v.size()) {
        return INT_MIN;
    }
    return max(v[idx],Maximum2(v,idx+1));
}
int main(){
    vector<int> v={1,2,3,4,5,3,9,5};
    cout<<"Real Array is : ";
    Display2(v,0);
    cout<<endl<<"Maximum value in array is : ";
    Maximum(v,0,INT_MIN);
    cout<<endl<<"Maximum value in array is : ";
    cout<<Maximum2(v,0);
}