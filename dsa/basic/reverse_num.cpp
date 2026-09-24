#include <bits/stdc++.h>
using namespace std;

int digits(int n){
    int digits = 0;
    while(n != 0){
        n = n/10;
        digits++;
    }

    return digits;
}

int reverse(int n){
    int reversed = 0;
    int size = digits(n);

    while(n != 0){
        int digit = n%10;
        reversed += digit*pow(10, size-1);

        size--;
        n = n/10;
    }

    return reversed;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << reverse(n) << endl;

    return 0;
}
