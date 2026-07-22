// https://codeforces.com/contest/2244/problem/B
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
    ll n, a, cnt = 0;
    cin >> n;
    bool is = true;
    for (ll i = 1; i <= n; i++) {
      cin >> a;
      if (a != i) {
        cnt += a - i;
      }
      if (cnt < 0)
        is = false;
    }
    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}
