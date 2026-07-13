// https://codeforces.com/problemset/problem/1154/A
#include <algorithm>
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

  vector<ll> v(4);
  ll max_val = 0;
  for (ll i = 0; i < 4; i++) {
    cin >> v[i];
    if (v[i] > max_val)
      max_val = v[i];
  }
  for (ll val : v) {
    if (val == max_val)
      continue;
    cout << max_val - val << " ";
  }

  return 0;
}
