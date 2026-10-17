#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i<n; i++){
            int cur = 0;
            if(nums[i] == 1){
                while(i < n && i+1<n && nums[i+1] == nums[i]){
                    cur++;
                    i++;
                }
                count = max(count, cur+1);
            }
        }

        return count;
    }
};

// https://leetcode.com/problems/max-consecutive-ones
