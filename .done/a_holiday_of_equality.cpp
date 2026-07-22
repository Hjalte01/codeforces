// https://codeforces.com/problemset/problem/758/A
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

  ll n, a;
  cin >> n;
  ll cnt = 0, max_v;
  cin >> max_v;
  cnt = max_v;

  for (ll i = 1; i < n; i++) {
    cin >> a;
    max_v = max(max_v, a);
    cnt += a;
  }
  cout << n * max_v - cnt << "\n";

  return 0;
}
