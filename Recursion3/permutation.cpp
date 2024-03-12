#include <iostream>
#include <string>
using namespace std;
void permute(string ans, string str){
    if(str==""){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permute(ans+ch,left+right);
    }
}
int main(){
    string str = "abc";
    permute("",str);
}