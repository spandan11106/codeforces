#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int insert_pos = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[insert_pos]);
                insert_pos++;
            }
        }
    }
};

// https://leetcode.com/problems/move-zeroes/
