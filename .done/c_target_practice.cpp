// https://codeforces.com/problemset/problem/1873/C
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
    ll sum = 0, ii, jj;
    char c;
    for (ll i = 1; i <= 10; i++) {
      for (ll j = 1; j <= 10; j++) {
        cin >> c;

        if (c == '.')
          continue;
        ii = i < 6 ? i : 11 - i;
        jj = j < 6 ? j : 11 - j;
        sum += min(ii, jj);
      }
    }

    cout << sum << "\n";
  }

  return 0;
}
