// https://codeforces.com/problemset/problem/2167/A
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
    ll N = 4;
    vector<ll> square(N);

    for (auto &x : square)
      cin >> x;

    bool is = true;
    for (ll i = 1; i < N; i++) {
      if (square[i - 1] != square[i])
        is = false;
    }

    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}
