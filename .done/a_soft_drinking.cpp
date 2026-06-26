// https://codeforces.com/problemset/problem/151/A
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

  ll n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  ll ml_drink = k * l;
  ll toast = ml_drink / nl;
  ll limes_toast = c * d;
  ll salt_toast = p / np;

  cout << min(toast, min(limes_toast, salt_toast)) / n << "\n";

  return 0;
}
