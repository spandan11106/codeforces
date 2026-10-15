#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> mpp;

        for(int i = 0; i<n; i++){
            mpp[nums[i]] = 1;
        }

        int max_pos = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                if(mpp[-nums[i]]){
                    max_pos = max(max_pos, nums[i]);
                }
            }
        }

        return max_pos;
    }
    // Time Complexity : O(n) || Space Complexity : O(n)

    int findMaxK_binsearch(vector<int>& nums) {
         int n = nums.size();
         sort(nums.begin(), nums.end());

         int low = 0, high = n-1;
         while(low < high){
             if(nums[high] + nums[low] == 0){
                 return nums[high];
             }

             else if(nums[high] + nums[low] < 0){
                 low++;
             }

             else high--;
         }

         return -1;
     }
     // Time Complexity : O(nlogn) || Space Complexity : O(1)
};

// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative
