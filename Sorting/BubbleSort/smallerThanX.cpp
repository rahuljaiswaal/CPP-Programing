#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str = "AZYZXBDJKX";
    string s="";
    int n = str.size();
    for(int i=0; i<n; i++){
        char ch = str[i];
        if(ch>='X') s.push_back(ch);
    }
    n = s.size();
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(s[j]>s[j+1]){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    cout<<s;
}