#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x, y;
  cin >> x >> y;

  if(y > x){
    cout << "NO" << endl;
    return;
  }
  if(x % y == 0){
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
  return;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}

// https://codeforces.com/problemset/problem/2241/A
