#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;

        for(int i = 0; i<n; i++){
            int req = target - nums[i];
            if(mpp[req]){
                return {i, mpp[req]-1};
            }
            mpp[nums[i]] = i+1;
        }

        return {};
    }
};

// https://leetcode.com/problems/two-sum
