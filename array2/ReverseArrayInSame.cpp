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

    // for(int i =0,j=s-1; i<=j; i++,j--){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }



    //reverse(v.begin(),v.end());    // built in function

    int i = 0;
    int j = s-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout<<"After reverse array is : ";
    Display(v,s);

    return 0;
}