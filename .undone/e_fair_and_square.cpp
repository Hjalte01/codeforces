// https://codeforces.com/contest/2241/problem/E
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

  ll t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    ll u, v;
    vector<vector<ll>> adj;
    for (ll i = 0; i < n - 1; i++) {
      cin >> u >> v;

      adj[u - 1].push_back(v - 1);
    }

    ll cnt = 0;
    for (ll i = 0; i < adj.size(); i++) {
      for (ll ii = 0; ii < adj[i].size(); ii++) {
        continue;
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}
