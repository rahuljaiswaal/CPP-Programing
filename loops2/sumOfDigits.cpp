#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum = 0;
    int lastDigit;
    while(n>0){
        lastDigit = n % 10;     
        sum = sum + lastDigit;
        n = n / 10;
    }
    cout<<"Addition of the number is  : "<<sum;
    return 0;
}