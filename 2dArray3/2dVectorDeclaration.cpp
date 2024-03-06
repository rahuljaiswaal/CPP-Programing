#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <vector <int> >  v (3, vector<int> (4,18));
    cout<<v[1][1]<<endl;
    cout<<v.size()<<endl;
    cout<<v[1].size()<<endl;
    return 0;
}