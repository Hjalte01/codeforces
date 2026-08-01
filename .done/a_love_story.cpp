// https://codeforces.com/problemset/problem/1829/A
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

    string c = "codeforces";
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++) {
      if (s[i] != c[i])
        cnt++;
    }

    cout << cnt << "\n";
  }

  return 0;
}
