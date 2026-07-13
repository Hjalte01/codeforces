// https://codeforces.com/problemset/problem/1692/A
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

  ll t, a, b, c, d;
  cin >> t;

  while (t--) {
    cin >> a >> b >> c >> d;

    ll cnt = 0;
    for (ll elm : {b, c, d}) {
      cnt += elm > a;
    }
    cout << cnt << "\n";
  }

  return 0;
}
