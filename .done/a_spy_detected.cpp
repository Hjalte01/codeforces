// https://codeforces.com/problemset/problem/1512/A
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
    ll n, idx;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    for (ll i = 0; i < n - 1; i++) {
      if (a[i] != a[i + 1]) {
        idx = (i + 1) + 1;
        if (i == 0 && a[i] != a[i + 2])
          idx--;
        break;
      }
    }
    cout << idx << "\n";
  }

  return 0;
}
