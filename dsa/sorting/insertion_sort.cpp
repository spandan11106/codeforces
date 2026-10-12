#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& nums){
    int n = nums.size();

    for(int i = 1; i<n; i++){
        int key = nums[i];
        int j = i-1;

        while(j >=0 && nums[j] > key){
            nums[j+1] = nums[j];
            j = j-1;
        }
        nums[j+1] = key;
    }
}
// Time Complexity - O(n^2)

void recursive_insertion_sort(vector<int>& nums, int n, int i){
    if(n == i) return;

    for(int j = i; j<n; j++){
        if(nums[j] < nums[i-1]){
            swap(nums[i-1], nums[j]);
        }
    }

    recursive_insertion_sort(nums, n, i+1);
}
// Time Complexity = O(n*n)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;

    recursive_insertion_sort(nums, n, 1);
    for(auto &x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
