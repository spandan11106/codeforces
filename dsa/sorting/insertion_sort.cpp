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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;

    insertion_sort(nums);
    for(auto &x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
