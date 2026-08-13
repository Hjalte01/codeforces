// https://codeforces.com/problemset/problem/1374/A
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
    ll x, y, n;
    cin >> x >> y >> n;

    ll val = (int(n / x) * x) + y;
    if (val > n)
      val -= x;
    cout << val << "\n";
  }

  return 0;
}
