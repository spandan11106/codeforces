#include <bits/stdc++.h>
#include <sys/types.h>
using namespace std;

long long factorial(int n){
    if(n == 1 || n == 0) return 1;
    return n*factorial(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << factorial(n);

    return 0;
}
