#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        long long per_sum = (long long)n*(n+1)/2;
        long long per_sq = (long long)n*(n+1)*(2*n+1)/6;
        long long sum = 0;
        long long sq = 0;

        for(int i = 0; i<n; i++){
            sum += arr[i];
            sq += (long long)arr[i]*arr[i];
        }

        long long diff = per_sum - sum;      // M - R
        long long sq_diff = per_sq - sq;     // M^2 - R^2
        long long add = sq_diff/diff;        // M + R

        int missing = (int)((add + diff) / 2);
        int repeating = (int)((add - diff) / 2);
        return {repeating, missing};
    }
};
