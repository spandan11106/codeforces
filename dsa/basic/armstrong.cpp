#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int size = 0;

    while(n != 0){
        n = n/10;
        size++;
    }

    return size;
}

bool isArmstrong(int n){
    int copy = n;
    int compare = 0;
    int size = count(n);

    while(n != 0){
        int digit = n%10;
        compare += pow(digit,size);
        n = n/10;
    }

    if(compare == copy) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << isArmstrong(n) << endl;

    return 0;
}
