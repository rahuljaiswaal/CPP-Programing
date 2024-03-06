#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Activity{
    int id;
    int start;
    int end;
};
void printActivity(vector<Activity>&arr){
    cout<<"Activity performed are "<<endl;
    for(int i = 0; i < arr.size(); i++){
    cout<<"Activity id: "<< arr[i].id<<" start at "<<arr[i].start<<" end at "<<arr[i].end <<endl;
    }
}
bool comparitive(Activity a1, Activity a2){
    return a1.end < a2.end;
}
int ActivitySelection(Activity a[], int n){
    sort(a,a+n, comparitive);
    int count = 1;
    vector<Activity> s;
    s.push_back(a[0]);
    int k=0;
    for(int i = 1; i < n; i++){
        if(a[i].start >= s[k].end){
        s.push_back(a[i]);
        count++;
        k++;
        }
    }
    printActivity(s);
    return count;
}
int main(){
int n;
cout<<"Enter no. of activity : ";
cin>>n;
struct Activity arr[n];
for(int i = 0; i < n; i++){
    cout<<"Enter id of activity : ";
    cin>>arr[i].id;
    cout<<"Enter start time of activity : ";
    cin>>arr[i].start;
    cout<<"Enter end time of activity : ";
    cin>>arr[i].end;
 }
int result = ActivitySelection(arr,n);
    cout<<"The Total Number of activity performed is : "<<result<<endl;
    return 0;
} 