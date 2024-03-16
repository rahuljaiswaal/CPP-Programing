#include <iostream>
using namespace std;
int main(){
    int n = 8;
    int arr[n]={6,3,2,4,1,7,1,5};
    int x = n-1;
    int realSum = (x*(x+1))/2;
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int ans = sum - realSum;
    cout<<"Dublicate number is : "<<ans;
}