#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector<int> v={0,0,0,0,0};
    int goal = 0;
    int n = v.size();
    int count = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum+=v[j];
            if(sum==goal) count++;
        }
    }
    cout<<count;
}