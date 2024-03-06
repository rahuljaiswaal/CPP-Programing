// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter the Number : ";
//     cin>>n;
//     int r = 0;
//     int lastDigit;
//     while(n>0){
//         r = r*10;
//         lastDigit = n % 10;     
//         r += lastDigit;
//         n = n / 10;
//     }
//     cout<<"Reverse of the number is  : "<<r;
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int lastDigit;
    int reverse;
    while(n>0){
        
        reverse *= 10;
        lastDigit = n % 10;
        reverse += lastDigit; 
        n /=10;
    }
    cout<<reverse;
    return 0;
}
