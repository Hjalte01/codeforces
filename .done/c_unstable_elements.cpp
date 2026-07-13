// https://codeforces.com/contest/2242/problem/C
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
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
    ll n, k;
    cin >> n >> k;

    map<ll, ll> dict;
    for (ll i = 0; i < n; i++) {
      ll x;
      cin >> x;
      dict[x]++;
    }

    ll cnt = 0;
    while (n > 0) {
      ll min_unique = INT32_MAX;
      for (auto elm : dict) {
        min_unique = min(elm.second, min_unique);
      }
      if ((abs(n - k) % dict.size() == 0 && k > n - dict.size() * min_unique))
        cnt++;

      // 4 5
      // 1 1 2 2
      //
      // abs(n - k) % min_unique == 0 ||

      n -= min_unique * dict.size();

      for (auto it = dict.begin(); it != dict.end();) {
        it->second -= min_unique;
        if (it->second <= 0) {
          it = dict.erase(it);
        } else {
          ++it;
        }
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}
