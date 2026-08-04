// https://codeforces.com/problemset/problem/1900/A
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
    ll n;
    string s;
    cin >> n >> s;

    ll idx = s.find("...");
    if (idx != -1) {
      cout << "2\n";
      continue;
    }

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
      if (s[i] == '#')
        continue;
      cnt++;
    }

    cout << cnt << "\n";
  }

  return 0;
}
