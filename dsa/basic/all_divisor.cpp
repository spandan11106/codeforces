#include <bits/stdc++.h>
using namespace std;

vector<int> all_div(int n){
    vector<int> result;

    for(int i = 1; i<= sqrt(n); i++){
        if(n%i == 0){
            result.push_back(i);
            if(n/i != i){
                result.push_back(n/i);
            }
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> res = all_div(n);
    for(auto x : res){
        cout << x << " ";
    }

    return 0;
}
