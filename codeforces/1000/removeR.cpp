#include <bits/stdc++.h>
using namespace std; 

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  int size = s.size();
  int c = 0;
  for(int i = 0; i<size-1; i++){
    if(s[i] != s[i+1]){
      c++;
    }
  }

  if(c == 1){
    cout << 2 << endl;
    return;
  }
  cout << 1 << endl;
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

// https://codeforces.com/problemset/problem/2241/C
