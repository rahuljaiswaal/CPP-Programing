#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
// array display
void Display(vector<int>& a, int s){
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// Quicksort
void quicksort(vector<int>& arr) {
    if (arr.size() <= 1) return;
    int pivot = arr[arr.size() / 2];
    vector<int> left, right, equal;
    for (int num : arr) {
        if (num < pivot)
            left.push_back(num);
        else if (num > pivot)
            right.push_back(num);
        else
            equal.push_back(num);
    }
    quicksort(left);
    quicksort(right);
    arr.clear();
    arr.insert(arr.end(), left.begin(), left.end());
    arr.insert(arr.end(), equal.begin(), equal.end());
    arr.insert(arr.end(), right.begin(), right.end());
}
// Mergesort
void merge(vector<int>& arr, vector<int>& left, vector<int>& right) {
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < left.size())
        arr[k++] = left[i++];

    while (j < right.size())
        arr[k++] = right[j++];
}
void mergesort(vector<int>& arr) {
    if (arr.size() <= 1) return;
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    mergesort(left);
    mergesort(right);
    merge(arr, left, right);
}
// Insertionsort
void insertionsort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
int main() {
    vector<int> data;
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    for (int i = 0; i < size; ++i) {
        data.push_back(rand() % size);
    }
    // Display(data, size);
    // Quicksort
    vector<int> quicksort_data = data;
    clock_t start_time = clock();
    quicksort(quicksort_data);
    clock_t end_time = clock();
    cout << "Quicksort Taking Time : " << double(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;
    // Mergesort
    vector<int> mergesort_data = data;
    start_time = clock();
    mergesort(mergesort_data);
    end_time = clock();
    cout << "Mergesort taking Time : " << double(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;
    // Insertionsort
    vector<int> insertionsort_data = data;
    start_time = clock();
    insertionsort(insertionsort_data);
    end_time = clock();
    cout << "Insertionsort Taking Time : " << double(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}