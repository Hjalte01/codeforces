// https://codeforces.com/contest/2232/problem/C2
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

  ll t, n, x, s;
  cin >> t;

  string str;

  for (ll i = 0; i < t; i++) {
    cin >> n >> x >> s >> str;

    ll total_s = 0, res = 0, potential = 0;
    ll max_res = x * s;

    for (int i = 0; i < n; i++) {
      char c = str[i];
      if (total_s - potential < 0) {
        if (x <= 0) {
          res--;
          break;
        }
        potential--;
        total_s += s - 1;
        x--;
      }
      if (total_s - potential <= 0 && x <= 0)
        break;

      if (c == 'I') {
        if (x > 0) {
          res++;
          x--;
          total_s += s - 1;
        }
      }

      if (c == 'E') {
        if (total_s > 0) {
          res++;
          total_s--;
        }
      }

      if (c == 'A') {
        if (x == 0 && total_s == 0) {
          break;
        } else if (x == 0) {
          total_s--;
          res++;
        } else if (total_s == 0) {
          res++;
          x--;
          total_s += s - 1;
        } else {
          res++;
          potential++;
        }
      }
    }

    cout << res << endl;
  }

  return 0;
}
