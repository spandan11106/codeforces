#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;
        for (int b = 0; b < 24; b++) {
            int cnt = 0;
            for (int x : candidates)
                if ((x >> b) & 1) cnt++;
            ans = max(ans, cnt);
        }
        return ans;
    }
};
// Time Complexity : O(24n)

// https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/
