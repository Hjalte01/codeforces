// https://codeforces.com/problemset/problem/1399/A
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
    vector<ll> a(n);
    bool is = true;
    for (auto &x : a)
      cin >> x;

    sort(a.begin(), a.end());
    for (ll i = 1; i < n; i++) {
      if (a[i] - a[i - 1] <= 1) {
        continue;
      }

      is = false;
      break;
    }

    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}
