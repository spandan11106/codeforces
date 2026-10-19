#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0, cost = 0;
        int mini = prices[0];

        for(int i = 0; i<n; i++){
            cost = prices[i];
            mini = min(mini, cost);
            profit = max(profit, cost-mini);
        }

        return profit;
    }
};

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
