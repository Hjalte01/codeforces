// https://codeforces.com/problemset/problem/2240/A
#include <bits/stdc++.h>
#include <filesystem>
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

  ll n, k, cnt;
  while (t--) {
    cin >> n >> k;
    cnt = 0;

    for (ll i = 1; n > 0; i *= 2) {
      cnt += min(k, n / i);
      n -= k * i;
    }

    cout << cnt << "\n";
  }

  return 0;
}
