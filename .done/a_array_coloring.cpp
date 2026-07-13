// https://codeforces.com/problemset/problem/1857/A
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
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
      cin >> a;
      sum += a;
    }
    cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
  }

  return 0;
}
