#include <bits/stdc++.h>
using namespace std;

string print_n_time(int n){
    if(n == 1) return "Hello";
    return "Hello " + print_n_time(n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << print_n_time(n);

    return 0;
}
