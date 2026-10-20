#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long merge(vector<int>& a, int l, int m, int r){
        int n1 = m - l + 1;
        int n2 = r - m;
        vector<int> L(n1), R(n2);

        for(int i = 0; i<n1; i++){
            L[i] = a[l+i];
        }
        for(int j = 0; j<n2; j++){
            R[j] = a[m+1+j];
        }

        long long res = 0;

        // count pairs: L[i] > 2 * R[j]
        int p = 0;
        for(int i = 0; i<n1; i++){
            while(p < n2 && L[i] > 2LL * R[p]) p++;
            res += p;
        }

        // standard merge
        int i = 0, j = 0;
        int k = l;

        while(i < n1 && j < n2){
            if(L[i] <= R[j]){
                a[k] = L[i];
                i++;
            }
            else{
                a[k] = R[j];
                j++;
            }
            k++;
        }

        while(i < n1){
            a[k] = L[i];
            i++;
            k++;
        }

        while(j < n2){
            a[k] = R[j];
            j++;
            k++;
        }

        return res;
    }

    long long mergeSort(vector<int>& a, int l, int r){
        long long res = 0;
        if(l < r){
            int m = l + (r - l)/2;
            res += mergeSort(a, l, m);
            res += mergeSort(a, m+1, r);
            res += merge(a, l, m, r);
        }

        return res;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return (int)mergeSort(nums, 0, n-1);
    }
};

// https://leetcode.com/problems/reverse-pairs/
