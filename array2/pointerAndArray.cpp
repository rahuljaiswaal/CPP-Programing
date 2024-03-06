#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr; // &arr[0]  -----> Address of the 1st element of the array
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    for(int i = 0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    ptr[0] = 10;
    for(int i = 0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";         // same work with address only
        ptr++;
    }
    ptr = arr;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    cout<<endl;
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";         // same work with address only
        ptr++;
    }
    ptr = arr;
    cout<<endl;
    for(int i = 0; i<=4; i++){
        cout<<i[ptr]<<" ";         // i[ptr]  // this is also valid
        
    }
    return 0;
}