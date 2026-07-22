// https://codeforces.com/problemset/problem/1901/A
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
    ll n, x, a, min_fuel;
    cin >> n >> x;
    ll a_p;
    cin >> a_p;
    min_fuel = a_p;
    for (ll i = 1; i < n; i++) {
      cin >> a;
      min_fuel = max(a - a_p, min_fuel);
      a_p = a;
    }
    min_fuel = max(min_fuel, 2 * (x - a_p));
    cout << min_fuel << "\n";
  }

  return 0;
}
