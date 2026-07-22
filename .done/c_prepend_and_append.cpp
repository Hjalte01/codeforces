// https://codeforces.com/problemset/problem/1791/C
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
    string s;

    cin >> n >> s;

    ll cnt = 0;
    while (true) {
      if (n - 1 <= cnt * 2) {
        break;
      }
      if (s[cnt] + s[n - 1 - cnt] - 2 * '0' == 1) {
        cnt++;
        continue;
      }
      break;
    }
    cout << n - cnt * 2 << "\n";
  }

  return 0;
}
