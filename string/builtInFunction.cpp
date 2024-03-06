#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str ="rahul is great";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    reverse(str.begin()+2,str.end()-3);
    cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+9); //  2 - 8  reverse
    cout<<str<<endl;
    string s ="abcd";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s.push_back('e');
    s.push_back('f');
    s.push_back('g');
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s.pop_back();
    cout<<s.length()<<endl;
    cout<<s<<endl;

    // plus operator

    s= s+"pqr";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s= s+str;
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s= s+"12345";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s= "5432189"+s;
    cout<<s.length()<<endl;
    cout<<s<<endl;
   // reverse(s.begin(),s.end());
    return 0;
}