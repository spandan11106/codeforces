#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int low = 0, mid = 0;
        int high = n-1;
        for(int i = 0; i<n; i++){
            if(a[mid] == 0){
                swap(a[mid], a[low]);
                low++;
                mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};

// https://leetcode.com/problems/sort-colors
