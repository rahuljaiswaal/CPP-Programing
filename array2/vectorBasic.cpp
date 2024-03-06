#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v[2] = 78;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    return 0;
}