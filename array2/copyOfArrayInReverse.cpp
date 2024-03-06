#include <iostream>
#include <vector>
using namespace std;
void Display(vector<int>& a, int s){
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
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
    cout<<"Real array is : ";
    Display(v,s);
    
    vector<int> v2(s);
    for(int i=0; i<s; i++){
        int j = s-1-i;
        v2[i]=v[j];
    }
    cout<<"After reverse array is : ";
    Display(v2,s);

    return 0;
}