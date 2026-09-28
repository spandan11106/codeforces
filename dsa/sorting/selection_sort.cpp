#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& nums){
    int n = nums.size();

    for(int i = 0; i<n-1; i++){
        int min_idx = i;
        for(int j = i+1; j<n; j++){
            if(nums[j] < nums[min_idx]){
                min_idx = j;
            }
        }

        swap(nums[i], nums[min_idx]);
    }
}
// Time Complexity - O(n^2)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;

    selection_sort(nums);
    for(auto &x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
