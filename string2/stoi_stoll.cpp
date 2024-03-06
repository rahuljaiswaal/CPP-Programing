#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string str = "12345";
    int x = stoi(str);
    cout<<x<<endl;
    cout<<x+1<<endl;

    string s = "12345678912345";
    long long y = stoll(s);
    cout<<y;
    
}