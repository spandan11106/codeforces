#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFreq(vector<int>& arr){
    map <int, int> mpp;
    vector<vector<int>> hash;

    for(auto x : arr) mpp[x]++;
    for(auto [key, value] : mpp){
        hash.push_back({key, value});
    }

    return hash;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr){
        cin >> x;
    }

    vector<vector<int>> hash = countFreq(arr);
    int i= hash.size();
    for(int k = 0; k<i; k++){
        for(int l = 0; l<2; l++){
            cout << hash[k][l] << " ";
        }
        cout << endl;
    }

    return 0;
}
