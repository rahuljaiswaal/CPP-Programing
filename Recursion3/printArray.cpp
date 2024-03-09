#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Display(int arr[],int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    Display(arr,n,idx+1);
}
void Display2(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    Display2(v,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i]=arr[i];
    }
    Display(arr,n,0);
    cout<<endl;
    Display2(v,0);
}