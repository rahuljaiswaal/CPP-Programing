#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        vector<int> numbers={2,7,11,15};
        int target = 9;
        int n = numbers.size();
        // int st = 0;
        // int e = n-1;
        vector<int> ans;
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                i++; j--;
                for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<endl;
                }

            }
            
            else if(numbers[i]+numbers[j]>target){
                j--;
                // cout<<j<<endl;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
                // cout<<"i is : "<<i<<endl;
            }

           
        }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<endl;
        }
        

}