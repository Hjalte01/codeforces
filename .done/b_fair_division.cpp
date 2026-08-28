// https://codeforces.com/problemset/problem/1472/B
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

    sort(v.rbegin(), v.rend());

    ll a = 0, b = 0;

    for (ll elm : v) {
      if (a < b) {
        a += elm;
      } else {
        b += elm;
      }
    }
    cout << (a == b ? "YES\n" : "NO\n");
  }

  return 0;
}
