#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        vector<int> cnt(26, 0);
        for (char c : s) cnt[c - 'a']++;

        int mx = *max_element(cnt.begin(), cnt.end());
        vector<int> ff(mx + 1, 0);
        for (int c : cnt) if (c > 0) ff[c]++;

        int ans = 0;
        for (int f = mx; f >= 1; --f) {
            if (ff[f] > 1) {
                int extra = ff[f] - 1;
                ans += extra;
                ff[f - 1] += extra;
            }
        }
        return ans;
    }
};

// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique
