#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[]={5,9,-3,36,78,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // insertion sort
    for(int i=0; i<n; i++){
        int j = i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else{
        //         swap(arr[j],arr[j-1]);
        //         j--;
        //     }
        // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }


    cout<<"Array after sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}