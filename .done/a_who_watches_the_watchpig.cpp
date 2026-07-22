// https://codeforces.com/contest/2245/problem/A
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
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (n / 2 < k) {
      cout << -1 << "\n";
      continue;
    }
    ll r_cnt = 0, cnt = 0;
    for (ll i = 0; i < n / 2; i++) {
      char c = s[i];
      if (c == 'R')
        r_cnt++;
      if (c == 'L' && r_cnt < k) {
        r_cnt++;
        cnt++;
      }
    }

    ll l_cnt = 0;
    for (ll i = n - 1; i >= n / 2; i--) {
      char c = s[i];
      if (c == 'L')
        l_cnt++;

      if (c == 'R' && l_cnt < k) {
        l_cnt++;
        cnt++;
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}
