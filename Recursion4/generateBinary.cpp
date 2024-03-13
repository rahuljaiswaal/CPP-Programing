#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void generateBinary(string s, int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generateBinary(s+'0',n);
    generateBinary(s+'1',n);
}

void generateBinary2(string s, int n){
    if(0==n){
        cout<<s<<endl;
        return;
    }
    generateBinary2(s+'0',n-1);
    generateBinary2(s+'1',n-1);
}

void generateConjecutiveBinary(string s, int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generateConjecutiveBinary(s+'0',n);
    if(s=="" || s[s.size()-1]=='0')generateConjecutiveBinary(s+'1',n);
}

int main(){
    int n=3;
    generateBinary("",n);
    cout<<endl<<"same work : "<<endl;
    generateBinary2("",n);
    cout<<endl<<"without conjecutive 1 : "<<endl;
    generateConjecutiveBinary("",n);
}