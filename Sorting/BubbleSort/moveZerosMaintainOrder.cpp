#include <iostream>
using namespace std;
int main(){
    int arr[]={5,0,-3,36,0,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // bubble sort

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){   // move zeros to end by maintaing the retrive order of the array
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }



    cout<<"Array after sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}