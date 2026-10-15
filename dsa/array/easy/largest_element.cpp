#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int>& arr){
    int n = arr.size();
    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    return largest;
}

int second_largest(vector<int>& arr){
    int n = arr.size();
    int largest = arr[0];
    int second = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    for(int i = 0; i<n; i++){
        if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    return second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for(auto& x : arr) cin >> x;

    cout << largest_element(arr) << endl;
    cout << second_largest(arr) << endl;

    return 0;
}
