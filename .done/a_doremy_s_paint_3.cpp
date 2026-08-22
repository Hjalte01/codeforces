// https://codeforces.com/problemset/problem/1890/A
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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

    cin >> n;

    vector<ll> v(n);
    for (auto &x : v)
      cin >> x;

    bool is = false;

    map<ll, ll> dir;
    for (ll i = 0; i < n; i++) {
      dir[v[i]]++;
    }

    if (dir.size() < 3) {
      if (n > 3) {
        if (dir.size() == 1 || dir.size() == 2 && abs(dir.begin()->second - prev(dir.end())->second) <= 1) {
          is = true;
        }

      } else {
        is = true;
      }
    }

    cout << (is ? "Yes\n" : "No\n");
  }

  return 0;
}
