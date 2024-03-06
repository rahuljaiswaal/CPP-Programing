#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int count = 0;
    while(n>0){
        n = n / 10;
        count++;
    }
    // for(;n>0;){
    //     n = n / 10;
    //     count++;
    // }
    cout<<"Number of digit in number is : "<<count;
    return 0;
}