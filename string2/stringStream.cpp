#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    string str = "rahul is wow awesome";
    stringstream s(str);
    string temp;
    while(s>>temp){
        cout<<temp<<endl;
    }
}