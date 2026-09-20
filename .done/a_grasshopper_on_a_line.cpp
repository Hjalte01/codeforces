// https://codeforces.com/problemset/problem/1837/A
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
    ll x, k;
    cin >> x >> k;

    if (x % k == 0)
      cout << 2 << "\n"
           << x - 1 << " " << 1 << "\n";
    else
      cout << 1 << "\n"
           << x << "\n";
  }

  return 0;
}
