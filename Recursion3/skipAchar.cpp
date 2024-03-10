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
int main(){
    string str = "rahul jaiswal";
    RemoveChar("",str);
}