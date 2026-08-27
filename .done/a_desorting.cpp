// https://codeforces.com/problemset/problem/1853/A
#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>
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
    cin >> n;

    vector<ll> v(n);

    for (auto &x : v)
      cin >> x;

    ll min_v = -1;
    for (ll i = 1; i < n; i++) {
      ll val = v[i] - v[i - 1];
      if (val >= 0) {
        if (min_v == -1)
          min_v = val;
        min_v = min(min_v, val);
      } else {
        min_v = -1;
        break;
      }
    }
    min_v++;

    cout << ll(ceil(min_v / 2.0)) << "\n";
  }

  return 0;
}
