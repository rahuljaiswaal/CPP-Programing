#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    // int max = arr[0];
    for(int i = 0; i<=n-1; i++){
       if(arr[i]>max) max = arr[i];
    }

    // 2nd maximum num
    int smax = INT_MIN;
    for(int i = 0; i<=n-1; i++){
        if(arr[i] != max && smax<arr[i]) smax = arr[i];
    }
    cout<<"Maximum No is : "<<max<<endl;
    cout<<"2nd Maximum No is : "<<smax;
    
    

    return 0;
}