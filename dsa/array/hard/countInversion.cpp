#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    long long inversions(vector<int> &arr, int left, int mid, int right){
        int n1 = mid-left+1;
        int n2 = right - mid;

        vector<int> L(n1), R(n2);

        for(int i = 0; i<n1; i++){
            L[i] = arr[left+i];
        }
        for(int j = 0; j<n2; j++){
            R[j] = arr[mid+1+j];
        }

        int i = 0, j = 0;
        int k = left;
        long long count = 0;

        while(i < n1 && j < n2){
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }
            else{
                arr[k] = R[j];
                count += n1 - i;
                j++;
            }
            k++;
        }

        while(i < n1){
            arr[k] = L[i];
            i++;
            k++;
        }

        while(j < n2){
            arr[k] = R[j];
            j++;
            k++;
        }

        return count;
    }

    long long conInv(vector<int> &arr, int l, int r){
        long long count = 0;
        if(l < r){
            int m = l + (r-l)/2;
            count += conInv(arr, l, m);
            count += conInv(arr, m+1, r);
            count += inversions(arr, l, m, r);
        }

        return count;
    }

    long long inversionCount(vector<int> &arr) {
        int n = arr.size();
        return conInv(arr, 0, n-1);
    }
};
