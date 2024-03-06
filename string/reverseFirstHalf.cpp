#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str ="rahulj";
    cout<<str<<endl;
    int n = str.size();
    int m  = n/2;
    reverse(str.begin(),str.begin()+m);
    cout<<str<<endl;
    reverse(str.begin()+1,str.begin()+5); // reverse index 1-4
    cout<<str;

}