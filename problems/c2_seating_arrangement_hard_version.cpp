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

    ll total_sum = 0, res = 0, potential = 0;
    ll max_res = x * s;

    for (char c : str) {
      if (c == 'I') {
        if (x == 0 || ceil(potential / s) >= x)
          continue;
        else {
          res++;
          x--;
          total_sum += s;
        }
      }

      if (c == 'E') {
        if (total_sum == 0)
          if (potential > 0 && x > 0) {
            potential--;
            res++;
            x--;
            total_sum += s;
          } else {
            continue;
          }
        else {
          res++;
          total_sum--;
        }
      }
      if (c == 'A') {
        if (x == 0 && total_sum == 0) {
          break;
        } else if (x == 0) {
          total_sum--;
          res++;
        } else if (total_sum == 0) {
          res++;
          x--;
          total_sum += s;
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
