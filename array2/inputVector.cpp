#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> v(5);
    // for(int i = 0; i<5; i++){
    //     cin>>v[i];
    // }
    // for(int i = 0; i<5; i++){
    //    cout<<v[i]<<" ";
    // }
    vector<int> v;
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;

    //input
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // output
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}