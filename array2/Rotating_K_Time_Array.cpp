#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Display(vector<int>& a, int s){
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>& a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
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
    int k;
    cout<<"Enter the n times rotaing : ";
    cin>>k;
    if(k>n) k=k%n;
    reversePart(0,s-k-1,v);
    reversePart(s-k,s-1,v);
    reversePart(0,s-1,v);
    cout<<"After "<<k<<" times rotaing array is : ";
    Display(v,s);

    return 0;
}