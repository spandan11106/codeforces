#include <bits/stdc++.h>
#include <climits>
#include <unordered_map>
using namespace std;

int maxFrequency(vector<int>& arr){
    unordered_map<int, int> mpp;
    for(auto x : arr) mpp[x]++;

    int max_freq = INT_MIN;
    int max_ele = 0;

    for(auto [key, value] : mpp){
        if(value > max_freq){
            max_freq = value;
            max_ele = key;
        }
        else if(value == max_freq){
            max_ele = max(max_ele, key);
        }
    }

    return max_ele;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
