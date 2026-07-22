// https://codeforces.com/contest/2244/problem/C
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
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> p(n);
    for (auto &elm : p)
      cin >> elm;
    bool is = true;
    for (ll i = 0; i < n; i++) {
      ll idx = i + 1;
      ll val = p[i];
      ll diff = abs(idx - val);
      if (diff % x == 0 || diff % y == 0)
        continue;
      if (x == y)
        ll compare = idx - val;
      if (diff % abs(x - y) == 0 && (idx + x + y < n || idx - x - y > 0 || (idx - x > 0 && idx - x + y < n) || (idx - y > 0 && idx - y + x < n)))
        continue;
      is = false;
      break;
    }
    cout << (is ? "YES\n" : "NO\n");
  }

  // 5 5 2
  // 1 5 3 4 2

  return 0;
}
