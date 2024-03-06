#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int x = 12345;
    string s = to_string(x);
    cout<<s<<endl;
    cout<<s.length();
    return 0;
}