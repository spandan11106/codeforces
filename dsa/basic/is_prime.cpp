#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if(n == 1) return 0;

    for(int i = 1; i<=sqrt(n); i++){
        if(n%i == 0 && i != 1){
            return 0;
        }
    }

    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << is_prime(n) << endl;

    return 0;
}
