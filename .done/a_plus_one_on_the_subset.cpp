// https://codeforces.com/problemset/problem/1624/A
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
    ll n, min_v, max_v;

    cin >> n;

    vector<ll> v(n);

    for (auto &x : v)
      cin >> x;

    min_v = *min_element(v.begin(), v.end());
    max_v = *max_element(v.begin(), v.end());

    cout << max_v - min_v << "\n";
  }

  return 0;
}
