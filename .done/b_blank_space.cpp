// https://codeforces.com/problemset/problem/1829/B
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
    ll n, a, sum = 0, sum_h = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
      cin >> a;
      if (a != 0)
        sum = 0;
      if (a == 0)
        sum++;
      if (sum > sum_h)
        sum_h = sum;
    }
    cout << sum_h << "\n";
  }

  return 0;
}
