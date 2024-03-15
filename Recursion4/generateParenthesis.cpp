#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void Parenthesis(string s, int open, int close, int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) Parenthesis(s+'(',open+1,close,n);
    if(close<open) Parenthesis(s+')',open,close+1,n);
}
int main(){
    int n=3;
    Parenthesis("",0,0,n);
}