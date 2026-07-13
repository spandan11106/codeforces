#include <bits/stdc++.h>
using namespace std;

bool good(long long x) {
    set<int> digits;

    if (x == 0) {
        digits.insert(0);
    }

    while (x > 0) {
        digits.insert(x % 10);
        x /= 10;
    }

    return digits.size() <= 2;
}

void solve_brute() {
    // Fails on test case 2 due to tle.
    long long x;
    cin >> x;

    long long y = 2;

    while (true) {
        if (good(y) && good(x * y)) {
            cout << y << '\n';
            return;
        }
        y++;
    }
}

void solve(){
  long long x;
  cin >> x;

  int digits = 0;

  while(x > 0){
    digits++;
    x /= 10;
  }

  int y = pow(10, digits) + 1;
  cout << y << endl;
  // x.y = x(10^d + 1) 
  // if x = 299 then x*y = 299299
  
  return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/2241/B
