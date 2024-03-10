#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,8,7,56,45,78,3,4,};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n] ;
//     // input
//     for(int i=0; i<=n-1; i++){
//         cin>>arr[i];
//     }
    
//     // int max = arr[0];
//     int max = INT_MIN;
//     for(int i=0; i<=n-1; i++){
//         if(max<arr[i]) max = arr[i];
//     }
//     cout<<max;
// }