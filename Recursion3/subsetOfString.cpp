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

// void storeSubsetWithDup2(string ans, string original,vector<string>& v, int idx, bool flag){
//     if(original.size()==idx){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     if(original.size()==1){  // when 1 element exist
//         if(flag == true) storeSubsetWithDup2(ans+ch,original,v,idx+1,true);
//         storeSubsetWithDup2(ans,original,v,idx+1,true);
//         return;
//     }
//     char ch1 = original[1];
//     if(ch==ch1){   // dublicate
//         if(flag == true) storeSubsetWithDup2(ans+ch,original,v,idx+1,true);
//         storeSubsetWithDup2(ans,original,v,idx+1,false);
//     }
//     else{  // no dublicate
//         if(flag == true) storeSubsetWithDup2(ans+ch,original,v,idx+1,true);
//         storeSubsetWithDup2(ans,original,v,idx+1,true);
//     }
// }


void storeSubsetWithDup(string ans, string original,vector<string>& v, bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.size()==1){  // when 1 element exist
        if(flag == true) storeSubsetWithDup(ans+ch,original.substr(1),v,true);
        storeSubsetWithDup(ans,original.substr(1),v,true);
        return;
    }
    char ch1 = original[1];
    if(ch==ch1){   // dublicate
        if(flag == true) storeSubsetWithDup(ans+ch,original.substr(1),v,true);
        storeSubsetWithDup(ans,original.substr(1),v,false);
    }
    else{  // no dublicate
        if(flag == true) storeSubsetWithDup(ans+ch,original.substr(1),v,true);
        storeSubsetWithDup(ans,original.substr(1),v,true);
    }
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
    
    cout<<endl;
    string st = "aab";
    vector<string> ve;
    storeSubsetWithDup("",st,ve,true);
    for(int i=0; i<ve.size(); i++){
        cout<<ve[i]<<" ";
    }

    // cout<<endl;
    // string st2 = "aba";
    // vector<string> ve2;
    // storeSubsetWithDup2("",st2,ve2,0,true);
    // for(int i=0; i<ve2.size(); i++){
    //     cout<<ve2[i]<<" ";
    // }
}