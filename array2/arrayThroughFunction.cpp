#include <iostream>
using namespace std;
void Display(int* a, int size){
    for(int i = 0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void Change(int b[]){   // int* b;
    b[0]=100;
}
int main(){
    int arr[] = {1,2,3,4,5};
    // accesing the element of the  array in another function
    // pass by reference
    int size = sizeof(arr) / sizeof(arr[0]);
    Display(arr,size);
    Change(arr);
    Display(arr,size);
    return 0;
}