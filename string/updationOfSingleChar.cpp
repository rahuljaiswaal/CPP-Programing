#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "rahul";
    cout<<str<<endl;
    str[1]='o'; // in cpp strings are mutable // its change
    cout<<str;

    return 0;
}