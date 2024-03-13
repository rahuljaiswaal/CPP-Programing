#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isPalindrome2(string s,int i, int j){
        if(i>j) return true;
        if(s[i]!=s[j]) return false;
        return isPalindrome2(s,i+1,j-1);
    
}
int main(){
    string str = "mom";
    cout<<isPalindrome(str)<<endl;
    string s = "dad";
    cout<<isPalindrome2(s,0,str.size()-1);
}