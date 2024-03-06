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
    cout<<"sum of the all element is : ";
    int sum = 0;
    for(int i = 0; i<=n-1; i++){
        sum+=arr[i];
    }
    cout<<sum;

    return 0;
}