// https://codeforces.com/problemset/problem/1742/B
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
    ll n, a;
    cin >> n;

    set<ll> s;

    for (ll i = 0; i < n; i++) {
      cin >> a;
      s.insert(a);
    }

    cout << (s.size() == n ? "YES\n" : "NO\n");
  }

  return 0;
}
