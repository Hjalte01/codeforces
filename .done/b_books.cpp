// https://codeforces.com/problemset/problem/279/B
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

  ll n, target;
  cin >> n >> target;
  ll arr[n];
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll sum = arr[0];
  ll res = 0;
  ll R = 0;

  for (ll L = 0; L < n; L++) {
    while (sum <= target && R < n) {
      R++;
      sum += arr[R];
      res = max(res, R - L);
    }
    sum -= arr[L];
  }

  cout << res << endl;

  return 0;
}
