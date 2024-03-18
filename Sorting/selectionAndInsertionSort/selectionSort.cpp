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


    // selection sort
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }


    cout<<"Array after sorted is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}