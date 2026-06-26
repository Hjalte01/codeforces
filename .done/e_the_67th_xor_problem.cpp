// https://codeforces.com/problemset/problem/2218/E
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t, n;
  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> n;
    vector<ll> v(n);

    for (ll j = 0; j < n; j++) {
      cin >> v[j];
    }
    ll res = 0;

    for (ll j = 0; j < v.size(); j++) {
      for (ll k = j + 1; k < v.size(); k++) {
        res = max(res, v[j] ^ v[k]);
      }
    }

    cout << res << endl;
  }

  return 0;
}
