#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int major = 0;
        int count = 0;

        for(int i = 0; i<n; i++){
            if(count == 0){
                major = nums[i];
            }
            if(nums[i] == major) count++;
            else count--;
        }

        return major;
    }
};

// https://leetcode.com/problems/majority-element
