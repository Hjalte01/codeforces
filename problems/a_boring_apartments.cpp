// https://codeforces.com/problemset/problem/1433/A
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
    ll x;
    cin >> x;

    ll sz_pow = floor(log10(x));

    ll sum = 0;

    sum += (ll(x / pow(10, sz_pow)) - 1) * 10;
    sum += (sz_pow + 1) * (sz_pow + 2) / 2;

    cout << sum << "\n";
  }

  return 0;
}
