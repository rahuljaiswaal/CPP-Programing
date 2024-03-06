#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str ="abcdef";
    // str.substr(idx,len);
    int n = str.size();
    cout<<str.substr(0)<<endl;
    cout<<str.substr(1)<<endl;
    cout<<str.substr(2)<<endl;
    cout<<str.substr(3)<<endl;
    cout<<str.substr(1,2)<<endl;
    cout<<str.substr(2,3)<<endl;
    cout<<str.substr(n/2)<<endl;
    

}