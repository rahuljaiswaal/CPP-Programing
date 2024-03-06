#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    // check mark
    bool flag = false;
    for(int i = 0; i<=n-1; i++){
        if(arr[i]==x) flag = true; 
    }
    if(flag == true) cout<<"Element Found";
    else cout<<"Element Not Found";
    return 0;
}