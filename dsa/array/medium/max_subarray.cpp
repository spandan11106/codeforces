#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int req = INT_MIN;
        int sum = 0;

        for(int i = 0; i<n; i++){
            if(sum < 0) sum = 0;
            sum += nums[i];
            req = max(req, sum);
        }

        return req;
    }

    vector<int> maxSumSubarray(vector<int>& arr) {
            long long max_sum = LONG_MIN;
            long long current_sum = 0;
            int start = 0, resStart = 0, resEnd = 0;
            for (int i = 0; i < arr.size(); i++) {
                current_sum += arr[i];
                if (current_sum > max_sum) {
                    max_sum = current_sum;
                    resStart = start;
                    resEnd = i;
                }
                if (current_sum < 0) {
                    current_sum = 0;
                    start = i + 1;
                }
            }
            vector<int> res;
            for(int i = resStart; i <= resEnd; i++) res.push_back(arr[i]);
            return res;
    }
};

// https://leetcode.com/problems/maximum-subarray
