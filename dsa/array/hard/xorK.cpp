#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        long count = 0;
        long long XOR = 0;

        unordered_map<int, int> mpp;
        mpp[0] = 1;

        for(int i = 0; i<n; i++){
            XOR ^= arr[i];
            if(mpp.find(XOR^k) != mpp.end()){
                count += mpp[XOR^k];
            }
            mpp[XOR]++;
        }

        return count;
    }
};
