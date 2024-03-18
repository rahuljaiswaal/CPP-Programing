#include <iostream>
using namespace std;
int main(){
    int arr[]={5,9,-3,36,78,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // bubble sort

    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-1-i; j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }



    // bubble sort optimised
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }


    cout<<"Array after sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}