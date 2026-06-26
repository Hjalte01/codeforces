// https://codeforces.com/problemset/problem/155/A
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

  ll n, k;
  cin >> n;
  ll sum = 0, min, max;

  for (ll i = 0; i < n; i++) {
    cin >> k;

    if (i == 0) {
      min = max = k;
      continue;
    }

    if (k < min) {
      min = k;
      sum++;
    }
    if (k > max) {
      max = k;
      sum++;
    }
  }
  cout << sum << "\n";

  return 0;
}
