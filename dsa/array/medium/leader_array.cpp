#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n = nums.size();
      vector<int> leader;
      leader.push_back(nums[n-1]);
      int maxi = nums[n-1];

      for(int i = n-2; i>=0; i--){
          if(nums[i] >= maxi){
              leader.push_back(nums[i]);
          }
          maxi = max(maxi, nums[i]);
      }

      reverse(leader.begin(), leader.end());
      return leader;
    }
};
