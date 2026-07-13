// https://codeforces.com/contest/2242/problem/A
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
    ll k, cnt = 0;
    cin >> k;
    vector<ll> c(k);
    for (ll i = 0; i < k; i++) {
      cin >> c[i];
      if (c[i] >= 2)
        cnt++;
      if (c[i] > 2) {
        cnt++;
      }
    }
    if (cnt >= 2) {
      cout << "YES\n";
      continue;
    }

    cout << "NO\n";
  }

  return 0;
}
