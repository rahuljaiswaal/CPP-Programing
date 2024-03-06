#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "ab_a";
    //string s = "racE E car";
//     int n = s.size();
//     cout<<s<<endl;
//     cout<<s.size()<<endl;
// string ans;
//     int count = 0;
//         for(int i=0; i<n; i++){
//             if((int)s[i]<65){
//                continue; 
//             }
//             ans=s[i];
//         }
//         cout<<ans<<endl;
//         cout<<s.size()<<endl;
char ch = 'a'-'A';
if(s.size()==0 || s.size()==1) cout<< true<<endl;
        int n = s.size();
        string ans = "";
        for(int i=0; i<n; i++ ){
            if((int)s[i]<65){
                if((int)s[i]<=48 || (int)s[i]>=57){
                continue;
                }
            }
            ans=ans+s[i];
        }
        for(int i=0; i<ans.size(); i++){
            if(ans[i]<97) ans[i]=ans[i]+ch;
        }
        // cout<<ans<<endl;
        string temp="";
        n=ans.size();
        int j = n-1;
        int k = 0;
        for(int i = j; i>=0; i--){
            temp+=ans[i];
            k++;
        }
        // cout<<temp<<endl;
        // int x = temp.size();
        // for(int i=0; i<x; i++){
        //     int z  = (int)temp[i];
        //     if(z<96){
        //         z+=32;
        //         temp[i]=char(z);
        //     }
        // }
        cout<<ans<<endl;
        cout<<temp<<endl;
        if(ans==temp) cout<< true<<endl;
        else cout<< false<<endl;
    return 0;
}