#include <bits/stdc++.h>
using namespace std;

void func(int n){
    if(n < 1) return;
    func(n-1);
    cout << n << " ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    func(n);

    return 0;
}
