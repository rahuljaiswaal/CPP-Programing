#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target of Two number sum : ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int s = v.size();
    for(int i=0; i<=s-2; i++){
        for(int j = i+1; j<=s-1; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}