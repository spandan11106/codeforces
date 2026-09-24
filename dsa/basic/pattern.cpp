#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void pattern21(int n){
    if(n < 1) return;

    for(int i = 0; i<n; i++){
        cout << "*";
    }
    cout << endl;

    for(int i = 0; i<n-2; i++){
        cout << "*";
        for(int j = 0; j<n-2; j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    for(int i = 0; i<n; i++){
        cout << "*";
    }

    return;
}

void pattern22(int n){
    if(n < 1) return;

    int rows = 2*n - 1;
    int cols = rows;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            int X = abs(i - n + 1);
            int Y = abs(j - n + 1);
            cout << max(X, Y) + 1 << " ";
        }
        cout << endl;
    }

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pattern22(4);
    return 0;
}
