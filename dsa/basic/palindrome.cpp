#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int digits = 0;
    while(n != 0){
        n = n/10;
        digits++;
    }
    return digits;
}

bool palim(int n){
    int rev = 0;
    int size = count(n);
    int copy = n;

    while(n != 0){
        int digit = n%10;
        rev += digit*pow(10, size-1);

        size--;
        n = n/10;
    }

    return copy == rev;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << palim(n) << endl;

    return 0;
}
