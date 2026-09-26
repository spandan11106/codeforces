#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &arr, int n, int mid, int i){
    if(i == mid) return;
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    helper(arr, n, mid, i+1);
}

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    int mid = n/2;
    if(n == 1) return;
    helper(arr, n, mid, 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;
    reverseArray(arr);
    for(auto &x : arr) cout << x << " ";

    return 0;
}
