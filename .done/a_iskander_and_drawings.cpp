// https://codeforces.com/contest/2244/problem/A
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
    ll n, cnt = 0, sum = 0;
    char c;

    cin >> n;
    for (ll i = 0; i < n; i++) {
      cin >> c;
      if (c == '#')
        cnt++;
      if (c == '*')
        cnt = 0;
      sum = max(sum, cnt);
    }
    cout << (ll)ceil(sum / 2.0) << "\n";
  }

  return 0;
}
