// https://codeforces.com/problemset/problem/1850/A
#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
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
    vector<ll> v(3);
    for (auto &x : v)
      cin >> x;

    ll min_val = *min_element(v.begin(), v.end());

    cout << (accumulate(v.begin(), v.end(), 0LL) - min_val >= 10 ? "YES\n" : "NO\n");
  }

  return 0;
}
