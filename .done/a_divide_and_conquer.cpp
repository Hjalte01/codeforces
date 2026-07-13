// https://codeforces.com/contest/2241/problem/A
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

  ll t, x, y;
  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> x >> y;
    float xy = (float)x / y;
    bool test = (floor(xy) == xy);
    cout << (test ? "YES" : "NO") << "\n";
  }

  return 0;
}
