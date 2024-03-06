#include <iostream>
using namespace std;
int main(){
    // int arr[5];
    // arr[0] = 1;
    // arr[1] = 5;
    // arr[2] = 2;
    // arr[3] = 3;
    // arr[4] = 9;
    // cout<<arr[3];


    // int arr[5] = {1,8,0,6,7};
    // cout<<arr[1];


    // int arr[] = {1,8,0,6,7};
    // cout<<arr[3];


    // int arr[5] = {1,8,0,6,7};
    // for(int i = 0; i<=4; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[3] = {1,2,3};
    // cin>>arr[0];
    // cin>>arr[1];
    // cin>>arr[2];
    // for(int i = 0; i<=2; i++){
    //     cout<<arr[i]<<" ";
    // }
    

    int arr[5];
    // input
    for(int i = 0; i<=4; i++){
        cin>>arr[i];
    }
    //output
    for(int i = 0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}