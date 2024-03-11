#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
void RemoveChar(string ans, string str){
    if(str.size()==0){
        cout<<ans;
        return;
    }
    char ch = str[0];
    if(ch=='a') RemoveChar(ans,str.substr(1));
    else RemoveChar(ans+ch,str.substr(1));
}

void RemoveChar2(string ans, string str, int idx){
    if(str.size()==0){
        cout<<ans;
        return;
    }
    char ch = str[idx];
    if(ch=='a') RemoveChar2(ans,str,idx+1);
    else RemoveChar2(ans+ch,str,idx+1);
}
int main(){
    string str = "rahul jaiswal";
    RemoveChar("",str);
    cout<<endl;
    string ssss = "physics wallah";
    RemoveChar2("",ssss,0);
}