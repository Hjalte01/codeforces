// https://codeforces.com/problemset/problem/1862/B
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
    cin >> n;
    vector<ll> v(n);
    vector<ll> res;

    for (auto &x : v)
      cin >> x;

    res.push_back(v[0]);
    for (ll i = 1; i < n; i++) {
      if (v[i - 1] > v[i])
        res.push_back(1);
      res.push_back(v[i]);
    }
    cout << res.size() << "\n"
         << res[0];
    for (ll i = 1; i < res.size(); i++)
      cout << " " << res[i];
    cout << "\n";
  }

  return 0;
}
