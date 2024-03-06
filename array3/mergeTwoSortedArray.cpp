#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Display(vector<int>& v,int n){
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
vector<int> merge(vector<int>& v1,vector<int>& v2){
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> res(n1+n2);
    int i = 0; // v1
    int j = 0; // v2
    int k = 0; // v
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
            // k++;
        }
        else{
            res[k]=v2[j];
            j++;
            // k++;
        }
        k++;
    }
    if(i==n1){
        while(j<n2){
            res[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j==n2){
        while(i<n1){
            res[k]=v1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    vector<int> v1;
    int n1;
    cout<<"Enter the size of the array1 : ";
    cin>>n1;
    for(int i = 0; i<n1; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int> v2;
    int n2;
    cout<<"Enter the size of the array2 : ";
    cin>>n2;
    for(int i = 0; i<n2; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    
    vector<int> res = merge(v1,v2);
    // for(int i = 0; i<res.size(); i++){
    //     cout<<res[i]<<" ";
    // }
    cout<<"array1 is : ";
    Display(v1,n1);
    cout<<endl;
    // cout<<"array2 is : ";
    // Display(v2,n2);
    // cout<<endl;
    cout<<"After merging array is : ";
    Display(res,res.size());
    return 0;
}

/*

        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            if(nums2[j]>nums1[j]){
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        if(i==0){
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        if(j==0){
            while(i>=0){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
        }

*/











/*


int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        if(i==0){
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        else{
            while(i>=0){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
        }

*/











//  correct leetcode


/*


        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        // if(i==0){
        //     while(j>=0){
        //         nums1[k]=nums2[j];
        //         j--;
        //         k--;
        //     }
        // }
        // else{
        //     while(i>=0){
        //         nums1[k]=nums1[i];
        //         i--;
        //         k--;
        //     }
        // }
        while(i>=0){
            nums1[k--]=nums1[i--];
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }

*/