#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Change(vector<int> a){   // pass by value
    a[0] = 100;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void Ram(vector<int>& a){   // pass by reference
    a[0] = 100;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,2,5,5,5};
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(3);
    // v.push_back(1);
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    Change(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    Ram(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
