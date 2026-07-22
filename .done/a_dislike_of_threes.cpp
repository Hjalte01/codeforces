// https://codeforces.com/problemset/problem/1560/A
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
    ll k;
    cin >> k;

    for (ll i = 1; i <= k; i++) {
      if (i % 3 == 0 || i % 10 == 3)
        k++;
    }

    cout << k << "\n";
  }

  return 0;
}
