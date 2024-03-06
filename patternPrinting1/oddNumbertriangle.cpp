/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(i % 2 == 0){
            continue;
        }
        for(int j = 1; j<=i; j++){
            if(j % 2 != 0){
                cout<<j;
            }
            
        }
        cout<<endl;
    }

    return 0;
}*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int a = 1;
        for(int j = 1; j<=i; j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }

    return 0;
}