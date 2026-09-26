#include <bits/stdc++.h>
using namespace std;

int sumN(int n){
    if(n < 1) return 0;
    return n + sumN(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << sumN(n);

    return 0;
}
