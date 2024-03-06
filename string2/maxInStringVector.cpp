#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str[] = {"0192" , "0048" , "002901" , "0025", "78", "91"};
    int max = stoi(str[0]);
    string s = str[0];
    for(int i = 1; i<6; i++){
        int x = stoi(str[i]);
        if(x>max){

            max=x;
            s=str[i];
        }
    }
    cout<<max<<" "<<s;
}