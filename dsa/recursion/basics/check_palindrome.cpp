#include <bits/stdc++.h>
using namespace std;

vector<char> dict = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                     '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

bool helper(string &s, int n, int i){
    if(i >= n-1-i) return 1;
    if(s[i] != s[n-1-i]) return 0;
    return 1&helper(s, n, i+1);
}

bool isPalindrome(string s){
    string copy;

    for(char c : s){
       c = tolower(c);
       if(find(dict.begin(), dict.end(), c) != dict.end()){
           copy += c;
       }
    }

    return helper(copy, copy.size(), 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    cout << isPalindrome(s);

    return 0;
}
