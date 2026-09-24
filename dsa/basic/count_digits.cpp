#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int count(int n){
    int digits = 0;
    while(n != 0){
        n = n/10;
        digits++;
    }

    return digits;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << count(n) << endl;

    return 0;
}
