// https://codeforces.com/problemset/problem/1676/B
#include <algorithm>
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

    for (auto &x : v)
      cin >> x;

    auto it = min_element(v.begin(), v.end());
    ll sum = 0;
    for (ll elm : v) {
      sum += elm - (*it);
    }

    cout << sum << "\n";
  }

  return 0;
}
