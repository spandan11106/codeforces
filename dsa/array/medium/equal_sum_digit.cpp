#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int sum_of_digit(int n){
        int sum = 0;

        while(n != 0){
            int digit = n%10;
            sum += digit;
            n = n/10;
        }

        return sum;
    }

    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        map <int, vector<int>> mpp;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            int sum = sum_of_digit(nums[i]);
            mpp[sum].push_back(i);
        }

        int max_sum = -1;
        for(auto [key, value] : mpp){
            if(value.size() != 1){
                int m = value.size();
                max_sum = max(max_sum, nums[value[m-1]] + nums[value[m-2]]);
            }
        }

        return max_sum;
    }
};
// Time Complexity : O(nlogn)
// Space Complexity : O(n)

// https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/
