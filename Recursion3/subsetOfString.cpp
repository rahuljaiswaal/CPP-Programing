#include<iostream>
#include<algorithm>
#include <string>
#include <vector>
using namespace std;
void printSubset(string ans, string original){
    if(original==""){
        cout<<ans<<" ";
        return;
    }
    char ch = original[0];
    printSubset(ans,original.substr(1));
    printSubset(ans+ch,original.substr(1));
}

void storeSubset(string ans, string original,vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    storeSubset(ans,original.substr(1),v);
    storeSubset(ans+ch,original.substr(1),v);
}

void printSubset2(string ans, string original, int idx){
    if(original.size()==idx){
        cout<<ans<<" ";
        return;
    }
    char ch = original[idx];
    printSubset2(ans,original,idx+1);
    printSubset2(ans+ch,original,idx+1);
}

void storeSubset2(string ans, string original,vector<string>& v, int idx){
    if(original.size()==idx){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    storeSubset2(ans,original,v,idx+1);
    storeSubset2(ans+ch,original,v,idx+1);
}

int main(){
    string str = "abc";
    printSubset("",str);
    cout<<endl;
    vector<string> v;
    storeSubset("",str,v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    string s = "def";
    printSubset2("",s,0);
    cout<<endl;
    vector<string> vec;
    storeSubset2("",s,vec,0);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}