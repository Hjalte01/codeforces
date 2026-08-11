// https://codeforces.com/problemset/problem/1343/B
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
    ll n;
    cin >> n;

    if (n % 4 != 0) {
      cout << "NO\n";
      continue;
    }
    cout << "YES\n";
    for (ll i = 0; i < n / 2; i++) {
      cout << (i + 1) * 2 << " ";
    }
    for (ll i = 0; i < n / 2; i++) {
      if (i == n / 2 - 1) {
        cout << (i + 1) * 2 - 1 + n / 2 << "\n";
        continue;
      }
      cout << (i + 1) * 2 - 1 << " ";
    }
  }

  return 0;
}
