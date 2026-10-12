#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& nums){
    int n = nums.size();
    bool swapped;

    for(int i = 0; i<n-1; i++){
        swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}
// Time Complexity - O(n^2)

void recursive_bubble_sort(vector<int>& nums, int n){
    if(n==1) return;

    int count = 0;
    for(int i = 0; i<n-1; i++){
        if(nums[i] > nums[i+1]){
            swap(nums[i], nums[i+1]);
            count++;
        }
    }

    if(count == 0) return;
    recursive_bubble_sort(nums, n-1);
}
// Time Complexity : O(n*n)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;

    recursive_bubble_sort(nums, n);
    for(auto &x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
