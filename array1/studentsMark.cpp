#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the element of the array : ";
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    //output
    cout<<"Student roll no whose marks is less than 35 : ";
    for(int i = 0; i<=n-1; i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;
}