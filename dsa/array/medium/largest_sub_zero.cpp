#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n = arr.size();
        int i = 0, sum = 0;
        int length = 0;
        unordered_map<int, int> mpp;

        while(i < n){
            sum += arr[i];
            if(sum == 0) length = max(length, i+1);
            if(mpp.find(sum) != mpp.end()){
                length = max(length, i - mpp[sum]);
            }
            else mpp[sum] = i;
            i++;
        }

        return length;
    }
};

// https://leetcode.com/problems/maximum-size-subarray-sum-equals-k
