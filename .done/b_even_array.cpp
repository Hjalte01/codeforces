// https://codeforces.com/problemset/problem/1367/B
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
  ll n;
  cin >> t;
  while (t--) {
    cin >> n;

    ll cnt_0 = 0;
    ll cnt_1 = 0;
    ll num;
    for (ll i = 0; i < n; i++) {
      cin >> num;

      if (num % 2 != i % 2) {
        if (num % 2 == 0) {
          cnt_0++;
        } else {
          cnt_1++;
        }
      }
    }

    cout << (cnt_0 == cnt_1 ? cnt_0 : -1) << "\n";
  }

  return 0;
}
