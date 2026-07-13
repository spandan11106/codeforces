#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> a(n), b(n);

  for(auto &x : a){
    cin >> x;
  }

  for(auto &y : b){
    cin >> y;
  }

  if(a == b){
    cout << "YES" << endl;
    return;
  }

  vector<int> diff(n);
  for(int i = 0; i<n; i++){
    diff[i] = b[i] - a[i];
  }

  long long sum = 0;
  for(int i = 0; i<n; i++){
    sum += diff[i];
    if(sum < 0){
      cout << "NO" << endl;
      return;
    }
  }
  // We can increase, but to decrease we need to increase the prevous one.
  // In short the sum of the difference
  // should always be positive, it connot be neg.
  if(sum >= 0){
    cout << "YES" << endl;
    return;
  }
  // To check the last element.
  cout << "NO" << endl;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}

// https://codeforces.com/problemset/problem/2241/D
