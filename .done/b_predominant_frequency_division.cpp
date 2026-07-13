// https://codeforces.com/contest/2242/problem/B
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

    ll mem = 1;
    ll cnt = 0;
    ll karma = 0;
    bool is = false;
    for (ll i = 0; i < n; i++) {
      cin >> a;
      if (is)
        continue;
      if (cnt < 0 && karma > 0) {
        karma--;
        cnt++;
      }
      cnt += (a <= mem) ? 1 : -1;

      if (cnt >= 0) {
        mem++;
        karma = cnt;
        cnt = 0;
      }
      if (mem > 2) {
        is = (i + 1 < n) ? true : false;
      }
    }

    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}
