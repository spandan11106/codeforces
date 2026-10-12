#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid-left+1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for(int i = 0; i<n1; i++){
        L[i] = arr[left + i];
    }
    for(int j = 0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    if(left >= right) return;

    int mid = left + (right-left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

// Time Complexity : O(nlogn) - This is the Best, Average and Worst Case time complexity.
// Space Complexity : O(n) - Additional space used to store temporary array during merging.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;

    mergeSort(arr, 0, n-1);
    for(auto &x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
