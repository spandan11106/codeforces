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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;

    bubble_sort(nums);
    for(auto &x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
