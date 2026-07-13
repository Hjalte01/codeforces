// https://codeforces.com/contest/2241/problem/D
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
    vector<ll> a(n), b(n);
    for (ll &x : a)
      cin >> x;
    for (auto &x : b)
      cin >> x;

    ll sum = 0;
    ll ans = true;
    for (ll i = 0; i < n; i++) {
      if (b[i] > a[i]) {
        sum += b[i] - a[i];
      }
      if (a[i] > b[i]) {
        sum += b[i] - a[i];
        if (sum < 0) {
          ans = false;
          break;
        }
      }
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }

  return 0;
}
