// https://codeforces.com/problemset/problem/1676/A
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

  ll n, k;
  cin >> n;

  const ll DIGITS = 6;

  for (ll i = 0; i < n; i++) {
    cin >> k;
    ll sum = 0;

    for (ll j = 0; j < DIGITS; j++) {
      if (j <= 2)
        sum += k % 10;
      else
        sum -= k % 10;
      k /= 10;
    }
    cout << (sum == 0 ? "YES" : "NO") << "\n";
  }

  return 0;
}
