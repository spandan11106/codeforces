#include <bits/stdc++.h>
using namespace std;

void func(int n){
    if(n < 1) return;
    cout << n << " ";
    func(n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    func(n);

    return 0;
}
