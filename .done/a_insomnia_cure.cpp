// https://codeforces.com/problemset/problem/148/A
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

  ll k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;

  ll sum = 0;
  for (ll i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
      sum++;
  }

  cout << sum;

  return 0;
}
