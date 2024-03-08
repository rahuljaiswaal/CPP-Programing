#include<iostream>
using namespace std;
int stairs(int n){
        if(n==0) return 0;
        if(n==1){
            return 1;
        }
        if(n==2){
            
            return 2;
        }
        
        int l = stairs(n-1);
        int r = stairs(n-2);
        
        int x = l + r;
        return x;
    }



int main(){
    int n;
    cin>>n;
    cout<<stairs(n);  //   1 2 3 5 8 13 21 34 55 89 144 233
}

   // HW

   // for step allowed 1 , 2 or 3

// int stairs(int n){
//    if(n==0) return 0;
//         if(n==1){
//             return 1;
//         }
//         if(n==2){
            
//             return 2;
//         }
//         if(n==3){
            
//             return 3;
//         }
        
//         int l = stairs(n-1);
//         int r = stairs(n-2);
//         int q = stairs(n-3);
//         int x = l + r + q;
//         return x;
//     }

