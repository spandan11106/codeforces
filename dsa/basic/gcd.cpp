#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int mini = min(a, b);
    int gcd_is = 1;
    for(int i = 1; i<=mini; i++){
        if(a%i == 0 && b%i == 0){
            gcd_is = max(gcd_is, i);
        }
    }

    return gcd_is;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    return 0;
}
