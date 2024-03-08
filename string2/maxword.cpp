#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    string str = "rahul is wow awesome is rahul a great a";
    // string str = "t";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxCount = 1;
    int count = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxCount=max(maxCount,count);
    }
    count = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }
    
}