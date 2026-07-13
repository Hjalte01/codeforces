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
    ll k, n;
    cin >> n >> k;

    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    if (k >= 2 || is_sorted(a.begin(), a.end())) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
