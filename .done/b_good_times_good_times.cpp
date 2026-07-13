// https://codeforces.com/contest/2241/problem/B

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

  ll t, x;
  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> x;
    cout << (ll)pow(10, ceil(log10(x))) + 1 << "\n";
  }

  return 0;
}
