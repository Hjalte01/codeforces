// https://codeforces.com/problemset/problem/1896/A
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

    auto min_elem = min_element(v.begin(), v.end());

    cout << (*min_elem == v[0] ? "YES\n" : "NO\n");
  }

  return 0;
}
