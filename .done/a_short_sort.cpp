// https://codeforces.com/problemset/problem/1873/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    bool is = false;
    for (ll i = 0; i < s.length(); i++) {
      if (i == 0 && s[i] == 'a' || i == 1 && s[i] == 'b' || i == 2 && s[i] == 'c')
        is = true;
    }

    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}
