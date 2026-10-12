#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[low + (high-low)/2];
    int i = low - 1;
    int j = high+1;

    while(true){
        do{
            i++;
        } while(arr[i] < pivot);

        do{
            j--;
        } while(arr[j] > pivot);

        if(i >= j) return j;
        swap(arr[i], arr[j]);
    }
}

void quick_sort(vector<int>& arr, int left, int right){
    if(left >= right) return;
    int pivot = partition(arr, left, right);

    quick_sort(arr, left, pivot);
    quick_sort(arr, pivot+1, right);
}
// Time Complexity : O(nlogn)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for(auto& x : arr) cin >> x;

    quick_sort(arr, 0, n-1);
    for(auto& x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
