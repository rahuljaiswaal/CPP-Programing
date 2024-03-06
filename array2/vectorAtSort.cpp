#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.at(2) = 8;
    cout<<v.at(0)<<" "<<v.at(2)<<endl;
    int n = v.size();
    for(int i=0; i<n; i++){   // n  --->  i < v.size()
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){   // n  --->  i < v.size()
        cout<<v.at(i)<<" ";
    }
    return 0;
}