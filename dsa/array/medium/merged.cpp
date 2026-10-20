#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int i = 1;

        while(i < intervals.size()){
            int prev_start = intervals[i-1][0];
            int prev_end = intervals[i-1][1];

            if(intervals[i][0] <= prev_end){
                intervals[i-1][0] = min(intervals[i-1][0], intervals[i][0]);
                intervals[i-1][1] = max(intervals[i-1][1], intervals[i][1]);
                intervals.erase(intervals.begin() + i);
            }
            else{
                i++;
            }
        }

        return intervals;
    }
};

// https://leetcode.com/problems/merge-intervals
