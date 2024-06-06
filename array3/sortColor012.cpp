#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Display(vector<int>& v, int n){
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
void sort012(vector<int>& v, int n){
    int no0 = 0, no1 = 0, no2 = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==0) no0++;
        else if(v[i]==1) no1++;
        else no2++;
    }
    for(int i = 0; i<n; i++){
        if(i<no0) v[i]=0;
        else if(i<(no0+no1)) v[i]=1;
        else v[i]=2;
    }
    Display(v,n);
}
void dutchFlag(vector<int>& v, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(v[mid]==2){
            swap(v[mid],v[high]);
            high--;
        }
        else if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }
    Display(v,n);
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    int n = v.size();
    cout<<"Current array is : ";
    Display(v,n);
    cout<<endl;
    cout<<"After sortd by simple method : ";
    sort012(v,n);
    cout<<endl;
    cout<<"After sortd by dutch flag algorithm : ";
    dutchFlag(v,n);
    return 0;
}
