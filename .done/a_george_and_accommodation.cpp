// https://codeforces.com/problemset/problem/467/A
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

  ll n, p, q, sum = 0;
  cin >> n;

  for (ll i = 0; i < n; i++) {
    cin >> p >> q;
    if (p + 1 < q)

      sum++;
  }
  cout << sum;

  return 0;
}
