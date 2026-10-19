#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        map<int, int> mpp;
        mpp[0]++;

        for(int i = 0; i<n; i++){
            sum += nums[i];
            if(mpp[sum - k]){
                count += mpp[sum - k];
            }
            mpp[sum]++;
        }

        return count;
    }
};

// https://leetcode.com/problems/subarray-sum-equals-k
