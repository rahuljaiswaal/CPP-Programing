#include <iostream>
using namespace std;
// int fact(int n){
//     int fact = 1;
//     for(int i = 2; i<=n; i++){
//         fact *=i;
//     }
//     return fact;
// }
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // for(int i = 1; i<=n; i++){
    //     cout<<fact(i)<<endl;
    // }
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
        cout<<fact<<endl;
    }
    return 0;
}