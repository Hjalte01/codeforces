// https://codeforces.com/problemset/problem/1409/A
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
    ll a, b;
    cin >> a >> b;
    ll dif = abs(a - b);
    cout << (ll)ceil(dif / 10.0) << "\n";
  }

  return 0;
}
