// https://codeforces.com/contest/2244/problem/D
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
    ll m, n;
    cin >> m >> n;
    vector<ll> a(m), b(n);
    cin >> a[0];
    for (ll i = 1; i < m; i++) {
      cin >> a[i];
      a[i] += a[i - 1];
    }
    for (auto &x : b)
      cin >> x;

    ll max_gain = 0, max_idx = 0;
    while (true) {
      max_gain = 0;
      for (ll i = n - 1; i >= 0; i--) {
        if (a[b[i] - 1] < max_gain) {
          max_gain = a[b[i] - 1];
          max_idx = b[i];
        }
      }
      if (max_gain == 0)
        break;

      for (ll i = 0; i < max_idx; i++) {
        a[i] *= -1;
      }
      for (ll i = max_idx; i < m; i++) {
        a[i] += abs(2 * max_gain);
      }
    }
    cout << a[m - 1] << "\n";
  }

  return 0;
}
