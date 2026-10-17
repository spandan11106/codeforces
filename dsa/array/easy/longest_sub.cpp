#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> mp;
        int res = 0;
        long long prefSum = 0;

        for (int i = 0; i < (int)arr.size(); ++i) {
            prefSum += arr[i];

            if (prefSum == k)
                res = i + 1;

            else if (mp.count(prefSum - k))
                res = max(res, i - mp[prefSum - k]);

            if (!mp.count(prefSum))
                mp[prefSum] = i;
        }
        return res;
    }
    // Time Complexity : O(n) | Worst Case : O(n^2) if collision there
    // Space Complexity : O(n)

    int two_pointer_sol(vector<int>& arr, long long k){
        int n = arr.size();
        int left = 0, right = 0;
        long long sum = arr[0];
        int maxLen = 0;

        while(right < n){
            while(sum > k){
                sum -= arr[left];
                left++;
            }
            if(sum == k){
                maxLen = max(maxLen, right-left+1);
            }
            right++;
            if(right < n) sum += arr[right];
        }

        return maxLen;
    }
    // Time Complexity : O(n)
};
